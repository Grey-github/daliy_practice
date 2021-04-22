#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define N 10000
#define N 20
int a[N];

void get_random(int uppernum)
{
    int i;
    srand(time(NULL));
    for (i=0; i<N; i++)
    {
        a[i] = rand() % uppernum;
    }
}

int howmany(int value)
{
     int count =  0, i;
     for (i =  0; i < N; i++)
         if (a[i] == value)
            count++;
     return count;
}

void print(void)
{
    int i;
    printf("value\thow many\n");
    for (i=0; i<10; i++)
    {
        printf("%d\t%d\n", i, howmany(i));
    }
    printf("\n");
}

int main(void)
{
    int i, j, k, histogram[10] = {0};
    get_random(10);
    print();
    for (i=0; i<N; i++)
    {
        histogram[a[i]]++;
    }
    for (i=0; i<10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");

    for (j=0; j<N; j++)
    {
        for (k=0; k<10; k++)
        {
            if (histogram[k] > 0)
            {
                printf("*\t");
                histogram[k]--;
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
