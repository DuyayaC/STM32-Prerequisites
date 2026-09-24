// 定义函数
return_type function_name( parameter list )
{
   body of the function
}

// 举例
int add(int x, int y)
{
   int sum = 0;
   sum = x + y;
   return sum;
}

void printHello(void)
{
   printf("Hello, World!\n");
}


// 函数声明与定义
// 函数声明
int add(int x, int y);

/* 函数被调用位置*/
int a = 5;
int b = 10;
int sum0 = add(a, b);
// 函数定义
int add(int x, int y)
{
   int sum = 0;
   sum = x + y;
   return sum;
}


// 或者

// 函数声明与定义
int add(int x, int y)
{
   int sum = 0;
   sum = x + y;
   return sum;
}
/* 函数调用 */

int a = 5;
int b = 10;
int sum0 = add(a, b);

// 特殊说明
//先定义一个枚举
typedef enum
{
    FUNC_STATE_FREE = 0,
    FUNC_STATE_BUSY = 1,
    FUNC_STATE_ERROR = 2,
}func_state_t;

func_state_t can_send_data(void)
{
    // 这里可以根据实际情况进行判断
    // 如果可以发送数据，返回 FUNC_STATE_FREE
    // 如果正在发送数据，返回 FUNC_STATE_BUSY
    // 如果发生错误，返回 FUNC_STATE_ERROR
    return FUNC_STATE_FREE; // 示例返回值
}

// 传值调用
/* 函数定义 */
void swap(int x, int y)
{
   int temp;

   temp = x; /* 保存 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 temp 赋值给 y */
  
   return;
}