#include <stdio.h>

int second_smallest(int a[], int start, int end)
{
    int min = a[start], second_min = a[end], i;
    for (i=0; i<=end; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    if (second_min == min)
    {
        second_min = a[start];
    }

    for (i=0; i<=end; i++)
    {
        if (a[i] == min)
        {
            break;
        }
        if (a[i] < second_min)
        {
            second_min = a[i];
        }
    }

    return second_min;
}

int main(void)
{
    int a[5] = {1, 9, 4, -10, -5};
    printf("%d\n", second_smallest(a, 0, 4));

    return 0;
}
