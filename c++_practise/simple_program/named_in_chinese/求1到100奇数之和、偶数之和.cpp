# include <stdio.h>

int main()
{
	int i1;
	int i2;
	int sum1 = 0;
	int sum2 = 0;
	
	for (i1=1; i1<=100; i1+=2)
	{
		sum1 = sum1 + i1;
	}
	for (i2=2; i2<=100; i2+=2)
	{
		sum2 = sum2 + i2;
	}
	
	printf("sum1 = %d, sum2 = %d\n", sum1, sum2);
	
	return 0;
 } 
