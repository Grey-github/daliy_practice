#include <stdio.h>

int main(void)
{
    unsigned int a, b, c, mask = 0x0000ff00;
    a = 0x12345678;

    b = (a & mask) >> 8; //0x00000056 取出8~15位
    c = (a >> 8) & ~(~0U << 8);
    printf("a = %0x\n", a);
    printf("将a 8～15位取出 %0x\t%0x\n", b, c);

    b = a & ~mask; //0x12340078 将8~15位清0
    printf("将a 8~15位清0 %0x\n", b);

    b = a | mask; //0x1234ff78 将8~15位置1
    printf("将a 8~15位置1 %0x\n", b);

    return 0;
}
