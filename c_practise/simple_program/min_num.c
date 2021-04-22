#include <stdio.h>

int minimum(int a[], int start, int end)
{
    int min = a[start], i;
    for (i=0; i<=end; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}

int main(void)
{
    int a[5] = {1, 5, 9, -3, 4};
    printf("%d\n", minimum(a, 0, 4));

    return 0;
}
