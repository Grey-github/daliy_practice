#include <stdio.h>
#include <math.h>
#include <assert.h>

double mysqrt(double y)
{
    double mid, start = 0, end = y;
    assert(y);
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid*mid < y)
        {
            if (fabs(mid*mid - y) < 0.001)
            {
                return mid;
            }
            else
            {
                start = mid;
            }
        }
        else if (mid*mid > y)
        {
            if (fabs(mid*mid - y) < 0.001)
            {
                return mid;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            assert(fabs(mid*mid - y) < 0.001);
            return mid;
        }
    }
}

int main(void)
{
    double y;
    printf("Please input a positive number: ");
    scanf("%lf", &y);
    printf("%lf\n", mysqrt(y));

    return 0;
}
