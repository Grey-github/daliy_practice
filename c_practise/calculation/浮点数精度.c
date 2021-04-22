#include <stdio.h>

int main()
{
	float a, b, c;
	double d;
	a = 1.345;
	b = 1.123;
	c = a + b;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	printf("%d\n",sizeof(d));
	if(c == a + b)
		printf("相等\n");
	else 
		printf("不相等 c = %f ", c); 
	
	return 0;
} 
