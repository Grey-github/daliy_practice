#include <stdio.h>
int a[5] = {2, 5, 8, 9, -2};

int partition(int start, int end)
{
    int pivot = a[end];
    while (start < end)
    {
        while (start<end && a[start]<=pivot)
        {
            ++start;
        }
        a[end] = a[start];
        while (start<end && a[end]>=pivot)
        {
            --end;
        }
        a[start] = a[end];
    }
    a[start] = pivot;
    return start;
}

int order_statistic(int start,int end, int k)
{
    int i = partition(start, end);
    if (k == i)
    {
        return a[k];
    }
    else if (k > i)
    {
        return order_statistic(i+1, end, k-i);
    }
    else
    {
        return order_statistic(start, i-1, k);
    }
}

int main(void)
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("%d\n", order_statistic(0, 4, 3));

    return 0;
}
