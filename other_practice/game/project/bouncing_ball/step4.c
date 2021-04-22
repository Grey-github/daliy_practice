//第四步，让小球斜着弹跳，主要思路是
//增加x，y两个方向的速度控制变量，
//一个碰到上下边界后改变正负号，
//一个碰到左右边界后改变正负号。
#include <stdio.h>

int main()
{
    int i, j;
    int x = 0;
    int y = 5;

    int velocity_x = 1;
    int velocity_y = 1;
    int left = 0;
    int right = 20;
    int top = 0;
    int bottom = 10;

    while(1)
    {
        x = x + velocity_x;
        y = y + velocity_y;

        system("clear"); //清屏函数
        //输出小球前的空行
        for (i=0; i<x; i++)
        {
            printf("fuck you");
            printf("\n");
        }
        for (j=0; j<y; j++)
        {
            printf(" ");
        }
        printf("O"); //输出小球o
        printf("\n");
        
        if ((x==top) || (x==bottom))
        {
            velocity_x = -velocity_x;
        }
        if ((y==left) || (y==right))
        {
            velocity_y = -velocity_y;
        }
    }

    return 0;
}