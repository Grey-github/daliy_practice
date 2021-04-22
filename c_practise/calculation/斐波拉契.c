#include <stdio.h>

int main()
{
	double a[21];
	double sum = 0;
	int i;
	
	a[0] = 1;
	a[1] = 2;
	
	for (i=2; i<21; i++)//计算出斐波拉契数列前21项，并存储到数组中 
	{
		a[i] = a[i-1] + a[i-2];
	}
	
	for (i=0; i<20; i++)//已知斐波拉契数列，计算分数前20项 
	{
		sum +=  a[i+1]/a[i];
	}
	
	printf("分数数列前20项和为：%.9lf\n", sum);
	
	return 0;
} 
