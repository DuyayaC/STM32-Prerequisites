#include <stdio.h>
 
// if
int main ()
{
   /* 局部变量定义 */
   int a = 10;
 
   /* 使用 if 语句检查布尔条件 */
   if( a < 20 )
   {
       /* 如果条件为真，则输出下面的语句 */
       printf("a 小于 20\n" );
   }
   printf("a 的值是 %d\n", a);
 
   return 0;
}

// if else
// int main ()
// {
//    /* 局部变量定义 */
//    int a = 100;
 
//    /* 检查布尔条件 */
//    if( a < 20 )
//    {
//        /* 如果条件为真，则输出下面的语句 */
//        printf("a 小于 20\n" );
//    }
//    else
//    {
//        /* 如果条件为假，则输出下面的语句 */
//        printf("a 大于 20\n" );
//    }
//    printf("a 的值是 %d\n", a);
 
//    return 0;
// }


// if else if 
// int main ()
// {
//    /* 局部变量定义 */
//    int a = 100;
 
//    /* 检查布尔条件 */
//    if( a == 10 )
//    {
//        /* 如果 if 条件为真，则输出下面的语句 */
//        printf("a 的值是 10\n" );
//    }
//    else if( a == 20 )
//    {
//        /* 如果 else if 条件为真，则输出下面的语句 */
//        printf("a 的值是 20\n" );
//    }
//    else if( a == 30 )
//    {
//        /* 如果 else if 条件为真，则输出下面的语句 */
//        printf("a 的值是 30\n" );
//    }
//    else
//    {
//        /* 如果上面条件都不为真，则输出下面的语句 */
//        printf("没有匹配的值\n" );
//    }
//    printf("a 的准确值是 %d\n", a );
 
//    return 0;
// }