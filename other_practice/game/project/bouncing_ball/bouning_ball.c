#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i, j;
    int x = 3;
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

        //输出小球所在行上方的右边界
        for (i=0; i<x; i++)
        {
            if (i == 0)
            {
                for (j=0; j<right+1; j++)
                {
                    printf("▔");
                }
            }
            else
            {
                for (j = 0; j < right + 1; j++)
                {
                    printf(" ");
                }
            }
            printf("|");
            printf("\n");
        }

        //输出小球
        for (j=0; j<y; j++)
        {
            printf(" ");
        }
        printf("O");
        
        //输出小球所在行的右边界
        for (j=0; j<right-y; j++)
        {
            printf(" ");
        }
        printf("|");
        printf("\n");

        //输出小球所在行下方右边界
        for (i=0; i<bottom-x; i++)
        {
            for (j = 0; j < right+1; j++)
            {
                printf(" ");
            }
            printf("|");
            printf("\n");
        }

        for (i=0; i<right+1; i++)
        {
            printf("▔");
        }
        printf("\n");
        sleep(1);

        if ((x==top) || (x==bottom))
        {
            velocity_x = -velocity_x;
            printf("\a"); //当小球触碰边界时响铃
        }
        if ((y==left) || (y==right))
        {
            velocity_y = -velocity_y;
            printf("\a");
        }
    }
}