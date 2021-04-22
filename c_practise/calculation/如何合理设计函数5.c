# include <stdio.h>
# include <stdbool.h>

bool IsPrime(int m)
{
	int i;
	
	for (i=2; i<m; i++)
	{
		if (0 == m%i)
		    break;
	}
	
	if (i == m)
	    return true;
	else
	    return false;
} 

void Travelerseval(int val)
{
	int i;
	
	for (i=2; i<=val; i++)
	{
		if (IsPrime(i))
		printf("%d\n", i);
	}
}

int main()
{
	int val;
	
	scanf("%d", &val);
	
	Travelerseval(val);
	
	return 0;
} 
