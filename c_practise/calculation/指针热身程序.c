# include <stdio.h>

int main(void)
{
	int *p;
	int i = 3;
	
	p = &i;
	
	printf("%d", p);
	
	return 0;
} 
