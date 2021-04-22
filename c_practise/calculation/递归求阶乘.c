#include <stdio.h>

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int n;
	
	printf("5!的结果是：%d\n", factorial(5));
	
	return 0;
} 
