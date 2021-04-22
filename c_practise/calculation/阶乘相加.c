#include <stdio.h>

int main()
{
	int i;
	double sum = 0;//非常奇怪的是：将类型改为long double后，输出结果为0.000000 
	double t = 1;
	for (i=1; i<=20; i++)
	{
		t *= i;
		sum += t;
	}
	
	printf("1+2!+3!+...+20!的和为：%lf\n", sum);//程序十分简单，但需要考虑到数据溢出的问题 
	
	return 0;
} 
