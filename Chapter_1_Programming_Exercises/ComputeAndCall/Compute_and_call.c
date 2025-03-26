#include<stdio.h>
int main()
{
  printf("Starting now:\n");
  one_three();
  two();

  printf("\ndone!");

  return 0;
}

int one_three()
{
  printf("one");

  return 0;
}

int two()
{
  printf("\ntwo\nthree");

  return 0;
}