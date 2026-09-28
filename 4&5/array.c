int a[5];                    /* 未初始化，值是垃圾 */
int b[5] = {1, 2, 3};        /* 前 3 个赋值，后 2 个自动为 0 */
int c[5] = {0};              /* 全部清零的惯用写法 */
int d[]  = {1, 2, 3, 4};     /* 长度由初始化列表推出 = 4 */

#include <stdio.h>
 
int main ()
{
   int n[ 10 ]; /* n 是一个包含 10 个整数的数组 */
   int i,j;
 
   /* 初始化数组元素 */         
   for ( i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; /* 设置元素 i 为 i + 100 */
   }
   
   /* 输出数组中每个元素的值 */
   for (j = 0; j < 10; j++ )
   {
      printf("Element[%d] = %d\n", j, n[j] );
   }
 
   return 0;
}

// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     int length = sizeof(array) / sizeof(array[0]);

//     printf("数组长度为: %d\n", length);

//     return 0;
// }

/* 初始化二维数组 */
int a[3][4] = {  
 {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
 {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
 {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
};

/* 传递数组给函数 */
void printArray(int *arr) 
{
    ;
}

void printArray(int arr[4]) 
{
    ;
}
