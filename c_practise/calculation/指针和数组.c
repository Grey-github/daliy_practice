#include <stdio.h>

int main()
{
	int a[10];
	int b;
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", *a);
	printf("%p\n", b);
	printf("%p\n", &b);
	
	return 0;	    
}

