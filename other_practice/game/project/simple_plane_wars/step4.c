//第四步，按空格键时，让飞机发射激光子弹
//定义一个变量isFire，用来记录飞机是否处于发射状态
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int x = 5;
    int y = 10;
    char input;
    int isFire = 0; //1发射子弹，0不发射子弹

    while(1)
    {
        system("clear"); //清屏函数

        //输出飞机上面的空行
        if (isFire == 0)
        {
            for (i=0; i<x; i++)
            {
                printf("\n");
            }
        }
        else // 输出飞机上面的激光竖线
        {
            for (i=0; i<x; i++)
            {
                for (j=0; j<y; j++)
                {
                    printf(" ");
                }
                printf("  |\n");
            }
            isFire = 0;
        }

        //输出飞机
        for (j=0; j<y; j++)
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
            isFire = 1;
        }
    }
}