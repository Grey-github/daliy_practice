#include <stdio.h>

int main()
{
    printf("0x%4x\n", 12);
    printf("0x%.2x\n", 12);
    printf("0x%4.2x\n", 12);
    printf("0x%04x\n", 12);

    return 0;
}
