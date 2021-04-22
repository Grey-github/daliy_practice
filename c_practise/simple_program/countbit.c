#include <stdio.h>

int countbit(unsigned int x)
{
    unsigned int mask = 1U << 31;
    int i, count = 0;
    printf("%x\n", mask);
    for (i=0; i<32; i++)
    {
        if ((x & mask) == mask)
        {
            count++;
            printf("count: %d\n", count);
        }
        x = x << 1; //移位运算符不改变变量的值,需要赋值
    }
    return count;
}

/*别人写的
*  int countbit(unsigned int x)
*  {
*    int i = 31, count = 0;
*    for (; i>-1; --i)
*    {
*        if ((x>>i)&1 == 1)
*        {
*            ++count;
*        }
*    }
*    return count
*  }
*/

int main(void)
{
    unsigned int x;
    printf("Please input an unsigned integer\n");
    scanf("%u", &x);
    printf("The unsigned integer has %d bits which is 1\n", countbit(x));

    return 0;
}
