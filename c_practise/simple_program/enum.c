#include <stdio.h>

//枚举类型的成员是常量，枚举类型的成员名和变量名在同一命名空间
enum coordinate_type
{
    RECTANGULAR = 1, POLAR
};

int main(void)
{
    int RECTANGULAR = 21;
    printf("%d %d \n", RECTANGULAR, POLAR);//因此结果为21 2
    return 0;
}
