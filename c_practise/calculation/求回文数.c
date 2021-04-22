# include <stdio.h>

int main()
{
	int val;
	int m;
	int sum = 0;
	
	printf("请输入你需要判断的数字\n");
	scanf("%d", &val);
	
	m = val;
	while (m)
	{
		sum = sum*10 + m%10;
		m = m/10;
	}
	
	if (sum == val)
	{
		printf("你输入的数字是回文数\n");
	}
	else 
	    printf("你输入的数字不是回文数\n");
	 
	 return 0;
}
