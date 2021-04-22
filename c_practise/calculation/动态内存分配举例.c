# include <stdio.h>
# include <malloc.h>

void change (int * p)
{
	*p = 200;
	
	free (p); 
}

int main ()
{
	int *p = (int *)malloc(sizeof(int));
	
	*p = 100;
	
	printf("%d\n", *p);
	
	change (p);
	
	printf("%d\n", *p);
	
	return 0;
}
