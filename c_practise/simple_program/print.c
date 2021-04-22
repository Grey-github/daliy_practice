#include <stdio.h>

void PrintN_Loop(int N)
{
    int i;
    for (i=0; i<N; i++)
        printf("%d\n", i);
    return;
}

int main()
{
    int a = 100;
    int b = 1000;
    int c = 10000;
    int d = 10000000;

    PrintN_Loop(d);
}
