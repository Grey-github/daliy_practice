#include <stdio.h>

int main()
{
    char c;

    printf("请输入字符: ");
    c = getc(stdin);
    printf("输入的字符: ");
    putc(c, stdout);

    return 0;
}
