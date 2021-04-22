#include <stdio.h>

int main()
{
	int i;
	int j;
	for (i=0; i<8; i++)
	{
		if (i<4)//分类讨论：行号小于等于4 
		{
			for (j=0; j<4-i; j++)
			{
				printf(" ");
			}
			for (j=0; j<2*i-1; j++)
			{
				printf("*");
			}
			printf("\n");
		} 
		else//行号大于4 
		{
			for (j=0; j<i-4; j++)
			{
				printf(" ");
			}
			for (j=0; j<15 - 2*i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
} 
