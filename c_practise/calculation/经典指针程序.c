# include <stdio.h>

void huhuan(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	
	return;
}

void huhuan_2(int * p, int * q)
{
	int t;
	
	t = *p;
	*p = *q;
	*q = t;
} 

int main()
{
	int a = 1234;
	int b = 5;
	
	Áº»ªÔÀ; 
	
	huhuan_2 (&a, &b);

	printf("a = %d,  b = %d\n", a, b);
	
	return 0;
}
