#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,count=0;
	
	for(i=101; i<200; i++)//依次判断101~200之间的数 
	{
		for(j=2; j<sqrt(i); j++)//判断这个数是否能被2到其平方根之间的某个数整除 
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>=sqrt(i))//当i能被某个整除时，输出i 
		{
			printf("%i  ", i);
			count++;
			
			if(count%5==0)//每输出5个数进行一次换行 
			{
				printf("\n");
			}
		}
		
	}	
	
	return 0;
} 
