// int    *ip;    /* 一个整型的指针 */
// double *dp;    /* 一个 double 型的指针 */
// float  *fp;    /* 一个浮点型的指针 */
// char   *ch;    /* 一个字符型的指针 */

#include <stdio.h>
 
// int main ()
// {
//    int  var = 20;   /* 实际变量的声明 */
//    int  *ip;        /* 指针变量的声明 */
   
//    ip = &var;     /* 在指针变量中存储 var 的地址 */
//    *ip = 30;      /* 通过指针修改 var 的值 */
 
//    printf("var 变量的地址: %p\n", &var  );
 
//    /* 在指针变量中存储的地址 */
//    printf("ip 变量存储的地址: %p\n", ip );
 
//    /* 使用指针访问值 */
//    printf("*ip 变量的值: %d\n", *ip );
 
//    return 0;
// }

 
// int main ()
// {
//    int  *ptr = NULL;
 
//    printf("ptr 的地址是 %p\n", ptr  );
 
//    return 0;
// }

 
// int main ()
// {
//    // 定义一个整数数组
//    int var[] = {10, 100, 200};
//    // 定义一个整数变量 i 和一个整数指针 ptr
//    int i, *ptr;
 
//    // 将指针 ptr 指向数组 var 的起始地址
//    ptr = var;
//    // 循环遍历数组
//    for ( i = 0; i < 3; i++)
//    {
//       // 打印当前指针 ptr 所指向的地址
//       printf("存储地址：var[%d] = %p\n", i, ptr);
//       // 打印当前指针 ptr 所指向地址的值
//       printf("存储值：var[%d] = %d\n", i, *ptr );
 
//       // 将指针 ptr 移动到下一个数组元素的位置
//       ptr++;
//    }
//    return 0;
// }


double getAverage(int *arr, int size)
{
  int    i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; i++)
  {
    sum += arr[i];
  }
 
  avg = (double)sum / size;
 
  return avg;
}