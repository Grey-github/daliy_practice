#include <stdio.h>

int main()
{
	char i;
	char j;
	char k;
	
	for (i='x'; i<='z'; i++)
	{
		for (j='x'; j<='z'; j++)
		{
			if (i!=j)
			{
				for (k='x'; k<='z'; k++)
				{
					if ((k!=i) && (k!=j))
					{
						if ((i!='x') && (k!='x') && (k!='z'))
						{
							printf("a-%c b-%c c-%c\n", i, j, k);
						}
					}
				}
			}
		}
	} //主要思路：用i,j,k分别代表a,b,c；用变量等于x,y,z表示配对 
	
	return 0;
} 
