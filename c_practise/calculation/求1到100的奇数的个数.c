# include <stdio.h>

int main()
{
	int i;
	int num = 0;
	
	for (i=1; i<=100; i+=2)
	    num = num + 1;
	    
	printf("num = %d\n", num);
	
	return 0;
 } 
