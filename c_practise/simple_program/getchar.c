#include <stdio.h>

int main()
{
	char ch;
	while((ch = getchar())!='\n')
	{
		printf("%d %c\n", ch, ch);
	}
	
	return 0; 
}

