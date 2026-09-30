/* ① 编译期开关：调试打印 */
#include <stdio.h>

#define DEBUG_LEVEL 2

#if DEBUG_LEVEL >= 3
    #define DBG(...)  printf("[DBG] " __VA_ARGS__)
#elif DEBUG_LEVEL == 1
    #define DBG(...)  printf("[INFO] " __VA_ARGS__)
#else
    #define DBG(...)  ((void)0)     /* 完全展开为空，零开销 */
#endif

/* ② 平台 / 板型区分 */
#if defined(STM32F407xx)
    #define LED_PORT  GPIOD
#elif defined(STM32F103xB)
    #define LED_PORT  GPIOC
#else
    #error "未指定目标芯片，请在编译选项中定义 STM32F4xx 等宏"
#endif

/* ③ 头文件被 C++ 引用时的 extern "C" */
#ifdef __cplusplus
extern "C" {
#endif
    void motor_init(void);
#ifdef __cplusplus
}
#endif

#error   "message"    /* 条件不满足直接终止编译，带自定义信息 */
#warning "message"    /* 编译警告，继续编译 */