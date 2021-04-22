#include <stdio.h>

union
{
    int n;
    unsigned char byte[4];
} a;

int main(void)
{
    a.n = 1;
    printf("size of a = %lu\n", sizeof(a));
    printf("a.n = %d\n", a.n);
    printf("a.byte[0] = %x, a.byte[1] = %x, a.byte[2] = %x, a.byte[3] = %x\n",
           a.byte[0], a.byte[1], a.byte[2], a.byte[3]);

    return 0;
}
