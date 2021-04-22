# include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	
	for (i=1; i<=100; i+=2)
	    sum = sum + i;
	
	printf("sum = %d\n", sum);	
	
	return 0;
 } 
