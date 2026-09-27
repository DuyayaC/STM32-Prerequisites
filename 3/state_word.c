#include <stdint.h>

/* 一个字节装三件事
 * bit     7        6 5 4 3        2 1 0
 *        使能       速度档         错误码
 *        1 位       4 位           3 位
 *        0/1        0~15           0~7
 */
#define ST_EN_POS      (7u)
#define ST_EN_MASK     (0x1u)     /* 0x01  0000 0001 */
#define ST_SPEED_POS   (3u)
#define ST_SPEED_MASK  (0xFu)     /* 0x0F  0000 1111 */
#define ST_ERR_POS     (0u)
#define ST_ERR_MASK    (0x7u)     /* 0x07  0000 0111 */

/* ==================== 解码：右移 + 掩码 ==================== */
uint8_t raw = 0xAA;  /* 1010 1010 */

uint8_t get_enable(uint8_t raw)
{
    return (uint8_t)((raw >> ST_EN_POS) & ST_EN_MASK);        /* 0xAA -> 1 */
}

uint8_t get_speed(uint8_t raw)
{
    return (uint8_t)((raw >> ST_SPEED_POS) & ST_SPEED_MASK);  /* 0xAA -> 5 */
}

uint8_t get_err(uint8_t raw)
{
    return (uint8_t)((raw >> ST_ERR_POS) & ST_ERR_MASK);      /* 0xAA -> 2 */
}

/* ==================== 打包：掩码 + 移位 + 或 ==================== */

uint8_t build_status(uint8_t enable, uint8_t speed, uint8_t err)
{
    uint8_t raw = 0u;

    raw |= (uint8_t)((enable & ST_EN_MASK)    << ST_EN_POS);
    raw |= (uint8_t)((speed  & ST_SPEED_MASK) << ST_SPEED_POS);
    raw |= (uint8_t)((err    & ST_ERR_MASK)   << ST_ERR_POS);

    return raw;                                               /* build_status(1, 5, 2) -> 0xAA */
}