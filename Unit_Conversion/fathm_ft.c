// fathm_ft.c --把2英寻转换成英尺（给出了文件名和程序的目的，以便以后浏览和打印程序）
#include <stdio.h>//预处理指令，引入头文件
int main(void)//函数头
{//函数体开始
    int feet, fathoms;//声明两个变量，为feet和fathoms
    
    fathoms = 2;//把2赋值给fathoms
    feet = 6 * fathoms;//查找变量fathoms的值，用6乘以该值，并把计算结果赋给变量feet
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);//打印输出结果
    printf("Yes, I said %d feet!\n", 6 * fathoms);//打印输出结果
    
    return 0;//返回值为0
}//函数体结束