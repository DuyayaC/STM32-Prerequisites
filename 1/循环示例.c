#include <stdio.h>
 
// while
int main ()
{
   /* 局部变量定义 */
   int a = 10;

   /* while 循环执行 */
   while( a < 20 )
   {
      printf("a 的值： %d\n", a);
      a++;
   }
 
   return 0;
}


// for 
// int main ()
// {
//    /* for 循环执行 */
//    for( int a = 10; a < 20; a = a + 1 )
//    {
//       printf("a 的值： %d\n", a);
//    }
 
//    return 0;
// }


// do while 
// int main ()
// {
//    /* 局部变量定义 */
//    int a = 10;

//    /* do 循环执行，在条件被测试之前至少执行一次 */
//    do
//    {
//        printf("a 的值： %d\n", a);
//        a = a + 1;
//    }while( a < 20 );
 
//    return 0;
// }


// 嵌套循环 
// int main ()
// {
//    /* 局部变量定义 */
//    int i, j;
   
//    for(i=2; i<100; i++) {
//       for(j=2; j <= (i/j); j++)
//         if(!(i%j)) break; // 如果找到，则不是质数
//       if(j > (i/j)) printf("%d 是质数\n", i);
//    }
 
//    return 0;
// }


// break
// int main ()
// {
//    /* 局部变量定义 */
//    int a = 10;

//    /* while 循环执行 */
//    while( a < 20 )
//    {
//       printf("a 的值： %d\n", a);
//       a++;
//       if( a > 15)
//       {
//          /* 使用 break 语句终止循环 */
//           break;
//       }
//    }
 
//    return 0;
// }


// continue
// int main ()
// {
//    /* 局部变量定义 */
//    int a = 10;

//    /* do 循环执行 */
//    do
//    {
//       if( a == 15)
//       {
//          /* 跳过迭代 */
//          a = a + 1;
//          continue;
//       }
//       printf("a 的值： %d\n", a);
//       a++;
     
//    }while( a < 20 );
 
//    return 0;
// }