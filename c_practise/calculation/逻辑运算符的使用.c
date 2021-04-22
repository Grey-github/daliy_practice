#include <stdio.h>

int main()
{
	int i = 10;
	int k = 20;
	int m;
	
	m = (k=5)||(1>2);
	printf("m = %d, k = %d\n", m, k);
	
	return 0;
 } 
