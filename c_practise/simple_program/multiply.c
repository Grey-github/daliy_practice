#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
    int i;
    unsigned int res = 0;
    for (i=0; i<32; i++)
    {
        if ((y & 1) == 1)
        {
            res += x;
        }
        x = x << 1;
        y = y >> 1;
    }
    return res;
}

int main(void)
{
    unsigned int x = 8, y = 16;
    printf("Please input two unsigned integers\n");
    scanf("%u%u", &x, &y);

    printf("%u\n", multiply(x, y));

    return 0;
}
