#include <stdio.h>

int count_age(int n)
{
	int age;
	if (n == 1)
	{
		age = 10;
		return age;
	}
	if (n > 1)
	{
		age = count_age(n-1) + 2;
	}
}
int main()
{
	int n = 5;
	printf("第五个人岁数为%d\n", count_age(n));
	return 0; 
} 
