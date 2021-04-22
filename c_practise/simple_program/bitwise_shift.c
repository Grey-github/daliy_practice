#include <stdio.h>

int main(void)
{
    int i = 0xcffffff3; //如此赋值int溢出了
    printf("%x\n", 0xffffff3>>2);
    printf("%x\n", i>>2);

    return 0;
}
