# include <stdio.h>
# include <stdbool.h>

bool IsPrime(int m)
{
	int i;
	
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
		    break;
	}
	if (i == m)
	    return true;
	else
	    return 
		false;
}

int main(void)
{
	int val;
	int i;
	
	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		if ( IsPrime(i) )
		    printf("%d\n", i);
	}
	
	return 0;
} 
