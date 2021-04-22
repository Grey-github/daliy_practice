#include <stdio.h>

int main()
{
	//printf("%d %d\n", rand(), rand()); 在这种情况下，每次运行的结果都一样
	srand((int)time(0)); 
    printf("%d %d\n", rand(), rand()); 
	printf("%f\n", (double)3/4); 
	return 0;
} 
