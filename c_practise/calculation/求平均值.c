#include <stdio.h>

int main()
{
	int a,b;
	
	printf("请输入两个数，之间用空格隔开\n");
	
	scanf("%d %d",&a,&b);
	
	double c= (a+b)/2.0;
	
    printf("%d与%d的平均值是:%lf",a,b,c);
    
    return 0;
}
