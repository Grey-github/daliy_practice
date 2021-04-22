//由于scanf要求每输入一个字符，按回车键后才能执行
//因此采用新的输入函数getch（），此函数立即返回用户的输入
//kbhit()是指用户输入的时候才返回1，否则返回0

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int x = 5;
    int y = 10;
    char input;

    while (1)
    {
        system("clear"); //清屏函数

        //输出小球上的空行
        for (i = 0; i < x; i++)
        {
            printf("\n");
        }

        //输出小球左边的空格
        for (j = 0; j < y; j++)
        {
            printf(" ");
        }

        printf("*"); //输出飞机*
        printf("\n");

        system("stty raw"); //使终端驱动处于一次一字符模式
        system("stty -echo"); //使终端不回显
        input = getchar();
        system("stty cooked"); //使终端驱动回到一次一行模式
        system("stty echo"); //终端恢复回显
       
        if (input == 'a')
        {
            y--; //位置左移
        }
        if (input == 'd')
        {
            y++; //位置右移
        }
        if (input == 'w')
        {
            x--; //位置上移
        }
        if (input == 's')
        {
            x++; //位置下移
        }
    }
}