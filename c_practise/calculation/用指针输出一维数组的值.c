# include <stdio.h>
void f(int *pArr, int len)
{
	int i;
	for (i=0; i<len; i++)
	    printf("%d\n", *(pArr+i));
}


int main ()
{
	int a[6] = {1, 2, 3, 4, 5, 6};
	f(a, 6);
	int * p;
	
	printf("%d %d %d %d\n", sizeof(double), sizeof(int), sizeof(char), sizeof(p));
	
	return 0;
}
