#include <stdio.h>

void PrintN_Recursion(int N)
{
    if (N)
    {
        PrintN_Recursion(N-1);
        printf("%d\n", N);
    }
    return;
}

int main()
{
    int a = 100;
    int b = 1000;
    int c = 10000;
    int d = 1000000;

    PrintN_Recursion(d);
}
