#include <stdio.h>

double mypow(double x, int n)
{
    if (n%2 == 0)
    {
        return mypow(x, n/2) * mypow(x, n/2);
    }
    else if ((n%2 != 0) && (n != 1))
    {
        return mypow(x, (n-1)/2) * mypow(x, (n-1)/2);
    }
    else
    {
        return x;
    }
}

int main(void)
{
    double x;
    int n;

    printf("Please input the base and the index:\n");
    scanf("%lf%d", &x, &n);
    printf("The result is %lf\n", mypow(x, n));

    return 0;
}
