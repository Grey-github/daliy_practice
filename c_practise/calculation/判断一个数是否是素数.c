# include <stdio.h>

int main(void)
{
	int val;
	int i;
	
	printf("请输入一个数字\n");
	scanf("%d", &val);
	
	for (i=2; i<val; ++i)  //1既不是素数也不是合数，所以i要从2开始取值 
	{
		if (val%i == 0)
	      break;
	} 
	if (i == val)
	    printf("Yes!\n");
	else
	    printf("No!\n");
	
	return 0;
}
