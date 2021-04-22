#include <stdio.h>

unsigned int rotate_right(unsigned int x, int n)
{
    unsigned int n_bits = 0;
    int i;
    for (i=0; i<n; i++)
    {
        n_bits += 1 << i;
    }
    n_bits = x & n_bits;
    x = x >> n;
    x = x + (n_bits << (32 - n));

    return x;
}

int main(void)
{
    unsigned int x = 0xdeadbeef;
    printf("x = %x\n", x);
    printf("x = %x\n", rotate_right(x, 8));

    return 0;
}
