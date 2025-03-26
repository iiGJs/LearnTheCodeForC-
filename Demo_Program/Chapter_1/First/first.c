#include <stdio.h>
int main(void) /*一个简单的C程序*/
{
  int num; /*定义一个名为num的变量*/
  num = 1; /*为num附一个值*/

  printf("I am a simple "); /*使用printf()函数*/
  printf("computer.\n"); /*使用printf()函数*/
  printf("My favorite number is %d because it is first.\n", num); /*使用printf()函数*/
  
  getchar();/*等待用户按下一个键*/
  return 0;/*给调用提供方返回一个数（暂时看作结束main函数的要求）*/
}