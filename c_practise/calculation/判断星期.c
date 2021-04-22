#include <stdio.h>

int main()
{
	//Monday Tuesday Wednesday Thursday Friday Saturday Sunday
	char ch;
	while((ch=getchar()) != '\n')
	{
		if ((ch=='M') || (ch=='m'))
		{
			printf("星期一\n");
			break;
		}
		else if ((ch=='W') || (ch=='w'))
		{
			printf("星期三\n");
			break;
		}
		else if ((ch=='F') || (ch=='f'))
		{
			printf("星期五\n");
			break;
		}
		else if ((ch=='T') || (ch=='t'))
		{
			if ((ch=='U') || (ch=='u'))
			{
				printf("星期二\n");
			}
			if ((ch=='h') || (ch=='H'))
			{
				printf("星期四\n");
			}
		}
		else if ((ch=='S') || (ch=='s'))
		{
			if ((ch=='A') || (ch=='a'))
			{
				printf("星期六\n");
				break;
			}
			if ((ch=='U') || (ch=='u'))
			{
				printf("星期日\n");
				break;
			} 
		}
		else
		{
			printf("输入错误\n");
		}
	}
	
	return 0;
}
