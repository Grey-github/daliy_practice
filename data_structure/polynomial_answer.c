#include <stdio.h>

struct Poly
{
    int ex;
    int co;
}Poly[1001];

int main()
{
    int a, b, i, j;
    int temp1, temp2;
    int A[2005]={0}, B[1005]={0};

    scanf("%d", &a); // 第一个多项式项数
    for (i=0; i<a; i++) // 存储第一个多项式在Ｂ数组中
    {
        scanf("%d%d", &Poly[i].co, &Poly[i].ex); // 先输入系数，后输入指数
        B[Poly[i].ex] = Poly[i].co; // 指数作为下标，系数作为数组元素
    }

    scanf("%d", &b); // 第二个多项式项数
    for (i=0; i<b; i++) // 计算加法结果在Ｂ中，乘法结果在Ａ中
    {
        scanf("%d%d", &temp1, &temp2);
        B[temp2] += temp1; // 指数相同则相加，否则直接放入
        for (j=0; j<a; j++) // 指数相加，系数相乘
            A[temp2+Poly[j].ex] += (temp1*Poly[j].co);
    }

    int isfirst = 1, haveoutput = 0; // isfirst判断是否第一个输出，haveoutput判断是否零多项式
    for (i=2000; i>=0; i--) // 输出乘法结果
    {
        if (A[i] != 0) // 项系数不为零
        {
            if (!isfirst) // 不是第一个项需要在项前输出空格，以分隔项
                printf(" %d %d", A[i], i);
            else
            {
                isfirst = 0;
                printf("%d %d", A[i], i); // 是第一个项不需要在项前输出空格
            }
            haveoutput = 1; // 如果执行了if语句则不是零多项式
        }
    }
    if (!haveoutput) // 如果Ａ是零多项式
        printf("0 0");

    haveoutput = 0; // 重置判断第二次输出是否是零多项式
    isfirst = 1; // 重置判断第二次输出的第一项
    putchar('\n');
    for (i=1000; i>=0; i--) // 输出加法结果
    {
        if (B[i] != 0) // 项系数不为零
        {
            if (!isfirst)
                printf(" %d %d", B[i], i);
            else
            {
                printf("%d %d", B[i], i);
                isfirst = 0;
            }
        haveoutput = 1;
        }
    }
    if (!haveoutput) // 如果Ｂ是零多项式
        printf("0 0");

    return 0;
}
