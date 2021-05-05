#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	int j;
	int sum = 0;
	int num;
	int a = 0;
	int b = 1;
	
	printf("循环次数\n");
	scanf("%d", &num);
	
	printf("数字\n"); 
	scanf("%d", &a);
	
	for (i=0; i<num; i++)
	{
		for (j=0; j<i+1; j++)
		{
			sum += a*pow(10, j);
			//计算出每一项的值 
		}	
		
	}
	
	printf("sum = %d", sum);
	
	return 0;
} 

/*标准答案 
#include<stdio.h>
int main()
{
    int s=0,a,n,t;
    printf("请输入 a 和 n：\n");
    scanf("%d%d",&a,&n);
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}*/
