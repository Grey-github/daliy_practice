//第五步，在第一行增加一个靶子，控制飞机发射激光击中它
//变量isKilled用来存储是否击中
//kbhit()无法实现
#include "kbhit.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int x = 5;
    int y = 10;
    char input;
    int isFire = 0;//1发射子弹，0不发射子弹

    int ny = 5; //一个靶子，放在第一行，ny列上
    int isKilled = 0; //1击中靶子，0未击中

    while(1)
    {
        system("clear"); //清屏函数

        if (isKilled == 0) //输出靶子
        {
            for (j=0; j<ny; j++)
            {
                printf(" ");
            }
            printf("●");
        }

        if (isFire == 0) //输出飞机上面的空行
        {
            for (i=0; i<x; i++)
            {
                printf("\n");
            }
        }
        else //输出飞机上面的激光竖线
        {
            for (i=0; i<x; i++)
            {
                for (j=0; j<y; j++)
                {
                    printf(" ");
                }
                printf("  |\n");
            }
            if (y+2 == ny)  
            {
                isKilled = 1; //击中靶子
            }
            isFire = 0;
        }
        
        //输出飞机
        for (j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf("  |\n"); //飞机头部
        for (j=0; j<y; j++)
        {
            printf(" ");
        }
        printf("<000>\n"); //飞机躯干
        for (j=0; j<y; j++)
        {
            printf(" ");
        }
        printf(" v v\n"); //飞机尾部
        
        system("stty raw"); //使终端驱动处于一次一字符模式
        system("stty -echo"); //关闭终端回显
        input = getchar();
        system("stty cooked"); //使终端驱动回到一次一行模式
        system("stty echo"); //开启终端回显

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
        if (input == ' ')
        {
            isFire = 1; //发射状态
        }
    }
}