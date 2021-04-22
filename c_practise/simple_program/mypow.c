#include <stdio.h>

double mypow(double x, int n)
{
    double tem, pow = x;
    int i;

    if (n%2 == 0)
    {
       while (n != 1)
       {
            pow = pow * pow;
            n = n / 2;
       }
       return pow;
    }
    else
    {
        n = n - 1;
        while (n != 1)
        {
            pow = pow * pow;
            n = n / 2;
        }
        pow = pow * x;
        return pow;
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
