// 常量：

#define PI 3.14159
#define MAX_SIZE 100

const int MAX_LENGTH = 256;
const double EULER_NUMBER = 2.71828;
const float GRAVITY = 9.81f;
const char NEWLINE = 'Hello, World!';

// 变量：

// 整数类型变量
int count = 0;
int a, b, c;

// 浮点类型变量
float temperature = 36.5f;
float aa, bb, cc;
// 字符类型变量
char grade = 'A';
char firstLetter;

// 布尔类型变量
bool isActive = true; //不在代码里面使用该类型， 通常以枚举类型替代

// 数组变量
int numbers[50];
int matrix[3][3];
// 指针变量
int *ptr = nullptr;

// 结构体变量
struct Point {
    int x;
    int y;
};

// 联合体变量
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

// 枚举类型变量
enum Color {
    RED,
    GREEN,
    BLUE
};


// 流程控制

// 判断
if(boolean_expression)
{
   /* 如果布尔表达式为真将执行的语句 */
}


if(boolean_expression)
{
   /* 如果布尔表达式为真将执行的语句 */
}
else
{
   /* 如果布尔表达式为假将执行的语句 */
}


if(boolean_expression)
{
   /* 如果布尔表达式为真将执行的语句 */
}
else if(another_boolean_expression)
{
   /* 如果另一个布尔表达式为真将执行的语句 */
}
else
{
   /* 如果布尔表达式为假将执行的语句 */
}


// 判断嵌套
if( boolean_expression 1) 
{
   /* 当布尔表达式 1 为真时执行 */
   if(boolean_expression 2)
   {
      /* 当布尔表达式 2 为真时执行 */
   }
}


// 循环

while(condition)
{
   /* 当条件为真时执行 */
}


for ( init; condition; increment )
{
   /* 当条件为真时执行 */
}


do
{
   /* 先执行一次，当条件为真时再次执行 */

}while( condition );

// 循环嵌套
for (initialization; condition; increment/decrement)
{
    /* 当条件为真时执行 */
    for (initialization; condition; increment/decrement)
    {
        /* 当条件为真时执行 */
        ... ... ...
    }
    ... ... ...
}

while (condition1)
{
    /* 当条件为真时执行 */
    while (condition2)
    {
        /* 当条件为真时执行 */
        ... ... ...
    }
    ... ... ...
}


// break， continue语句
