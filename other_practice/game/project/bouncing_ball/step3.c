//第三步，实现小球的上下弹跳，在第二步的基础上，
//增加记录速度的变量，小球的新位置=就位置+速度
//判断小球到达上下边界时，改变速度方向，即改变正负号
#include <stdio.h>

int main()
{
    int i, j;
    int x = 5;
    int y = 10;

    int hight = 20;
    int velocity = 1;

    while(1)
    {
        x = x + velocity;
        system("clear"); //清屏函数

        //输出小球前的空行
        for (i=0; i<x; i++)
        {
            printf("\n");
        }
        //输出小球前的空格
        for (j=0; j<y; j++)
        {
            printf(" ");
        }
        printf("O");
        printf("\n");

        if (x == hight || x == 0)
        {
            velocity = -velocity;
        }
    }
}