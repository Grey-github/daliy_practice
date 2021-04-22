#include <stdio.h>

int euclid(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }
    else
    {
        return euclid(b, a%b);
    }
}
int main(void)
{
    int a, b;
    printf("Please input two positive integer:\n");
    scanf("%d%d", &a, &b);
    printf("The Greatest Common Divisor is %d\n", euclid(a, b));
    return 0;
}
