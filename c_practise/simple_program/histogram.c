#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 100

int a[N];

void gen_random(int upper_bound)//获取随机数到数组中
{
    int i;
    srand(time(NULL));
    for (i=0; i<upper_bound; i++)
    {
        a[i] = rand() % upper_bound;
    }
}

int main(void)
{
    int i, j;
    int histogram[N] = {0};

    gen_random(N);
    for (i=0; i<N; i++)//统计随机数出现的次数
    {
        histogram[a[i]]++;//将随机数作为histogram的下标，提高效率
    }

    for (i=0; i<N; i++)//打印直方图显示随机数出现次数
    {
        printf("%d\t", i);
        for (j=0; j<histogram[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
