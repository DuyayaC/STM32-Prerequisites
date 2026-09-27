#include <stdint.h>

/* bit    7        6        5        4         3        2       1      0    */
/* 状态标志 */
#define FLAG_READY     (1u << 7)   /* 0x80  1000 0000 */
#define FLAG_IMU_OK    (1u << 6)   /* 0x40  0100 0000 */
#define FLAG_CAN_ERR   (1u << 5)   /* 0x20  0010 0000 */
#define FLAG_OVERHEAT  (1u << 4)   /* 0x10  0001 0000 */
#define FLAG_LOW_VOLT  (1u << 3)   /* 0x08  0000 1000 */
#define FLAG_ESTOP     (1u << 2)   /* 0x04  0000 0100 */
#define FLAG_M2_EN     (1u << 1)   /* 0x02  0000 0010 */
#define FLAG_M1_EN     (1u << 0)   /* 0x01  0000 0001 */

/* 组合掩码 */
#define FLAG_FAULT_ALL    (FLAG_ESTOP | FLAG_OVERHEAT | FLAG_LOW_VOLT | FLAG_CAN_ERR)  /* 0x3C  0011 1100 */
#define FLAG_ENABLE_ALL   (FLAG_M1_EN | FLAG_M2_EN)                                    /* 0x03  0000 0011 */

/* 运行时存储状态 */
uint8_t status = 0u;               /* 0x00  0000 0000 */

/* ==================== 一、按状态整字赋值 ==================== */

void status_set_idle(void)
{
    status = 0u;                                            /* 0x00  0000 0000  空闲 */
}

void status_set_ready(void)
{
    status = (uint8_t)(FLAG_READY | FLAG_IMU_OK);           /* 0xC0  1100 0000  就绪 */
}

void status_set_run(void)
{
    status = (uint8_t)(FLAG_READY | FLAG_IMU_OK | FLAG_M1_EN | FLAG_M2_EN);            /* 0xC3  1100 0011  运行 */
}

void status_set_estop(void)
{
    status = (uint8_t)(FLAG_ESTOP);                         /* 0x04  0000 0100  急停，已停机 */
}

void status_set_overheat(void)
{
    status = (uint8_t)(FLAG_OVERHEAT);                      /* 0x10  0001 0000  过温 */
}

void status_set_faults(void)
{
    status = (uint8_t)(FLAG_ESTOP | FLAG_OVERHEAT | FLAG_CAN_ERR);                       /* 0x34  0011 0100  多故障同时 */
}

/* ==================== 二、运行中只改一位 ==================== */

void status_set_low_volt(void)
{
    status |= (uint8_t)(FLAG_LOW_VOLT);                     /* 0xC3 -> 0xCB   1100 0011 -> 1100 1011   bit3 置 1 */
}

void status_set_can_err(void)
{
    status |= (uint8_t)(FLAG_CAN_ERR);                      /* 0xC3 -> 0xE3   1100 0011 -> 1110 0011   bit5 置 1 */
}

void status_clear_overheat(void)
{
    status &= (uint8_t)(~FLAG_OVERHEAT);                    /* 0xD3 -> 0xC3   1101 0011 -> 1100 0011   bit4 清 0 */
}

void status_clear_estop(void)
{
    status &= (uint8_t)(~FLAG_ESTOP);                       /* 0xC7 -> 0xC3   1100 0111 -> 1100 0011   bit2 清 0 */
}

void status_stop(void)
{
    status &= (uint8_t)(~FLAG_ENABLE_ALL);                  /* 0xC3 -> 0xC0   1100 0011 -> 1100 0000   清两个使能位 */
}

void status_clear_all_faults(void)
{
    status &= (uint8_t)(~FLAG_FAULT_ALL);                   /* 0x34 -> 0x00   0011 0100 -> 0000 0000   清四个故障位 */
}

/* ==================== 三、判断当前状态（只读，不改 status） ==================== */

uint8_t status_is_fault(void)
{
    if (status & FLAG_FAULT_ALL)
    {
        return 1u;                                          /* 0x10  0001 0000 -> 1 */
    }

    return 0u;                                              /* 0xC3  1100 0011 -> 0 */
}

uint8_t status_is_run(void)
{
    if (status_is_fault() == 0u)
    {
        if (status & FLAG_ENABLE_ALL)
        {
            return 1u;                                      /* 0xC3  1100 0011 -> 1 */
        }
    }

    return 0u;                                              /* 0xC0  1100 0000 -> 0 */
}

uint8_t status_is_ready(void)
{
    if (status_is_fault() == 0u)
    {
        if ((status & FLAG_READY) && (status & FLAG_IMU_OK))
        {
            return 1u;                                      /* 0xC0  1100 0000 -> 1 */
        }
    }

    return 0u;                                              /* 0x40  0100 0000 -> 0，缺 READY */
}