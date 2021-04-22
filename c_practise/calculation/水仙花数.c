#include <stdio.h>

int main()
{
	int i,j,a,b,c;
	for(i=100; i<999; i++)
	{
		a = i%10;
		b = i/100;
		c = i/10%10;                     
		if(i == a*a*a + b*b*b + c*c*c)
		{
			printf("%i ", i);
		}
	}
	return 0;
}
