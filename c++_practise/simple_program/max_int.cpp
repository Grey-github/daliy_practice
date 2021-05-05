#include <stdio.h>

int main()
{
	int max_int = (1<<31) - 1;//int取值范围为：-(2^31)~(2^31-1)，最大正数为2的32次方减一 
	printf("%d\n", max_int);
	return 0;
} 
