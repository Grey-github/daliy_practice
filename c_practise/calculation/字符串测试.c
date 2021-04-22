#include <stdio.h>

int main()
{
	char *a = "hello";
	char *b = "hello";
	printf("%s\n%#X %#X %c\n", a, a, &a, *a);
	printf("%s\n%#X", b, b);
	if (a == b)
	{
		printf("a is the same as b\n");
	}
	else
	{
		printf("a is not the same as b\n");
	}
	return 0;
} 
