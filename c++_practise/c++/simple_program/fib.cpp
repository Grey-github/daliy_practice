#include <stdio.h>

int fib1(int n);
int fib2(int n);

int main()
{
	int n = 90;
	fib1(n);
	fib2(n);
	return 0;
}

int fib1(int n)
{
	int g = 1;
	int f = 0;
	int i = 2;
	while(n--)
	{
		g = g + f;
		f = g - f;//随着规模的增大，数列最终会溢出 
		printf("%d %d\n",i++, f);
	}
	return f;
}
int fib2(int n)//参考leedcode上解答改进的答案 
{
    int a1 = 0;
    int a2 = 1;
    int a3;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    for (int i=2; i<=n; i++)
    {
        a3 = (a1 + a2) % 1000000007; 
        a1 = a2;
        a2 = a3;     
        printf("%d: %d\n",i, a3);
    }
    return a3;
}
