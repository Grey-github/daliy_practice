#include <stdio.h>
#include <malloc.h>

int main()
{
	int * p;
	int i;
	int len;
	
	p =  (int *)malloc(4*len);

	printf("请输入您想要保存的值的个数：\n\n");
	
	scanf("%d", &len);
	
	printf("\n请输入所有您想要保存的值，并用空格隔开每个值\n\n");
	
	for (i=0; i<len; i++)
		scanf("%d", &p[i]);
	
	for (i=0; i<len; i++)
	    printf("%d\n", p[i]);
	
	return 0;
	
}
 
