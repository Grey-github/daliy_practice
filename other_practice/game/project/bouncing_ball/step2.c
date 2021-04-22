//通过改变小球坐标的变量，让小球下落
#include <stdio.h>
int main()
{
    int i, j;
    int x = 1;
    int y = 10;
    for (x=1; x<10; x++)
    {
        system("clear"); //清屏函数
        //输出小球上面的空行
        for (i=0; i<x; i++)
        {
            printf("\n");
        }
        //输出小球左边的空格
        for (j=0; j<y; j++)
        {
            printf(" ");
        }
        printf("O"); //输出小球o
        printf("\n");

        return 0;
    }
}