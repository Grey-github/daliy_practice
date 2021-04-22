#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	int i;
	int t;
	
	printf("请输入一个不多于5位的正整数: ");
	scanf("%d", &num);
	
	for (i=0; i<5; i++)//求正整数的位数 
	{
		if ((num/pow(10,i))>=1 && (num/pow(10,i))<10)
		{
			printf("此正整数是%d位数\n", i + 1);
		}
	}
	
	while(num != 0)//将数字逆序输出 
	{
		t = num % 10;
		num = num/10;
		printf("%d ", t);
	} 
	
	return 0; 
} 
