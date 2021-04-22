#include <stdio.h>
#define N 3

int a[N] = {1, 2, 3};
int i = 0;

void arrange(int n)
{
    if (n == 3)
    {
        printf("%d ", a[i]);
        arrange(n-1);
    }
    else if (n == 2)
    {
        printf("%d ", a[i+1]);
        arrange(n-1);
    }
    else
    {
        printf("%d\n", a[i+2]);
        i++;
    }
}
int main(void)
{
    arrange(N);
    return 0;
}

