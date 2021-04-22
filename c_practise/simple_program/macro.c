//此程序无法通过，因为宏定义和变量同名
#include <stdio.h>
#define RECTANGULAR 1
#define POLAR 2

int main(void)
{
    int RECTANGULAR;
    printf("%d %d\n", RECTANGULAR, POLAR);
    return 0;
}
