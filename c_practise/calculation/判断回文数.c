#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	int new_num;
	int t;
	int tem;
	int n = 4;
	
	printf("请输入一个5位数的正整数：");
	scanf("%d", &num);
	
	tem = num;//暂时存储输入的数 
	
	while(num != 0)//分解每位数，并计算逆序数 
	{
		t = num % 10;
		num = num/10;
		new_num += t*pow(10, n);
		n--;
	} 
	                          
	if (new_num == tem)//判断输入数与逆序数是否相等 
	{
		printf("此正整数是回文数\n");
	}
	else
	{
		printf("此正整数不是回文数\n");
	}
	
	return 0;
} 
