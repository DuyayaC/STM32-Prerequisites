
//标准形式
enum 枚举名
{
    枚举元素1,
    枚举元素2,
    ...
};

// 举例
enum Color {
    RED,
    GREEN,
    BLUE
};

enum Color myColor;

// 更常见的方法
typedef enum
{
    RED,
    GREEN,
    BLUE
} color;

color myColor;//myColor为变量


// 枚举的值默认从0开始，依次递增
typedef enum
{
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
} color;

// 建议写法
typedef enum
{
    RED = 1,    // 1
    GREEN = 2,  // 2
    BLUE = 3    // 3
} color;

// 替换
#define MON  1
#define TUE  2
#define WED  3
#define THU  4
#define FRI  5
#define SAT  6
#define SUN  7
//等价于
typedef enum
{
      MON = 1, 
      TUE, 
      WED, 
      THU, 
      FRI, 
      SAT, 
      SUN
}day;