#include <stdio.h>

int main()
{
	int the_rest = 1;
	int i;
	
	for (i=0; i<9; i++)
	{
		the_rest = (the_rest + 1)*2;
	}
	printf("第一天摘桃的数目为：%d\n", the_rest);
	return 0;
}
