# include <stdio.h>

int main() 
{
	int f1 = 1;
	int f2 = 2;
	int f3;
	int i;
	int n;
	char ch;

	do {
		printf("请输入项数n的值\n");
		printf("n = ");
		scanf("%d", &n);

		if (1 == n) 
		{
			f3 = 1;
		} 
		else if (2 == n) 
		{
			f3 = 2;
		} 
		else 
		{
			for (i=3; i<=n; i++) 
			{
				f3 = f1 + f2;
				f1 = f2;
				f2 = f3;  //每输出一次f3，f1、f2 的值保留了下来，
				        //他们的值会比初始值要大，因此从第二次开始结果就会出错 

			}
		}

		printf("斐波拉契数列的第n项 = %d\n", f3);
		printf("请问你是否要继续，继续请输入Y/y, 结束请输入N/n\n");
		scanf(" %c", &ch);
	}while ('y'==ch || 'Y'==ch);
	
	return 0;
}
