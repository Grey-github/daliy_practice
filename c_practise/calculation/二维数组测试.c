#include <stdio.h>

int main()
{
	char *p;
	char a[][10] = {"son", "of", "bitch"};
	p = a[0];
	printf("%#X %s %d\n", a[0], a[0], a[0]);
	printf("%#X %s %d\n", p, p, p);
	return 0;
} 
