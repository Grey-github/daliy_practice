# include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;
	
	scanf("%d", &val);
	for (i=3; i<=val; i++)
	{
		//判断i是否是素数，是输出，不是不输出 
        for (j=2; j<i; ++j)
        {
        	if (0 == i%j)
        	    break;
		}
		if (j == i)
		    printf("%d\n", i);
	}
	
	return 0;
} 
