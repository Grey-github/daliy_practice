#include <stdio.h>
#include <stdlib.h>

//由于Linux中无getch（）函数的替代
//虽然在curses.h中存在getch（），但它将整个终端显示都改变了
//无法再与简单的输入输出兼容，故此篇采用《C专家编程》中的方法
//通过调整终端驱动模式来实现无回车读入字符
int main()
{
    char c;

    //最初终端驱动处于普通的一次一行模式

    //使终端驱动处于一次一字符模式
    system("stty raw");

    printf("Please input a character:    ");

    c = getchar();

    //使终端驱动回到一次一行模式
    system("stty cooked");

    printf("\nEnd inputting without a enter!!!\n");

    return 0;
}
