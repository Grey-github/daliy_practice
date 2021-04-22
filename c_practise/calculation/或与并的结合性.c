#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	
	c = (a<b) || (a=b);
	printf("%d %d\n", a, b);
	printf("%d", sizeof(bool));
} 
