#include <stdio.h>

#define PI 3.1415926f
#define SQUARE(x)   ((x) * (x))
#define MAX(a, b)   ((a) > (b) ? (a) : (b))

/* 常用技巧：把多条语句包成一个"语句块" */
#define LOG(fmt, ...)   do { printf("[LOG] " fmt "\n", ##__VA_ARGS__); } while (0)

/* # 字符串化、## 连接 */
#define STR(x)        #x            /* STR(abc)  -> "abc"        */
#define CONCAT(a, b)  a##b          /* CONCAT(motor, 1) -> motor1 */
