# include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg;
	
	for (i=1; i<101; ++i)
	{
		if (i%2 == 1)	
		{
			sum += i;
			++cnt;			
		}
	}
	
	avg = 1.0*sum/cnt;
	
	printf("sum = %d\n", sum);
	printf("cnt = %d\n", cnt);
	printf("average = %f\n", avg);
	
	return 0;
	
	
 } 
