# include <stdio.h>

void printn(int n)
{
	int i;
	for (i=1; i<n; i++)
	{
		printf("%d\n", i);
	}
	return;
}
void printN(int N)
{
	int n; 
	if (n == 0)
	{
		return;
	}
	else
	{
		printf("%d\n", N);
		printN(N - 1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	//printn(n);
	printN(n);
	
	return 0;
}
