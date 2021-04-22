# include <stdio.h>

void sort(int * a, int len)
{
	int i;
	int j;
	int t;
	for (i=0; i<len-1; i++)
		{
			for (j=0; j<len-1-j; j++)
				{
					if (a[j]>a[j+1])
						{
							t = a[j];
							a[j] = a[j+1];
							a[j+1] = t; 
						}
				}
		}
}

int main(void)
{
	int j = 0;
	int a[5] = {3, 4, 6, 7, 5};
	
	sort(a, 5);
	
	for (j=0; j<5; j++)
		printf("%d ", a[j]);
	
	return 0;
} 
