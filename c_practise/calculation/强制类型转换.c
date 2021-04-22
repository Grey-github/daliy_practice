# include <stdio.h>

int main() 
{
	int a = 4546754;
	
	(int *)(a);
	
	printf("%#X", a);
	
	return 0;
}
