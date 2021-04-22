#include <stdio.h>
#include <math.h>

int main()
{
	printf("请输入一元二次方程的三个系数a b c, 并用空格隔开。\n ");
	
	int a,b,c;
	double x1,x2;
	double delta;
	
	scanf("%d %d %d", &a, &b, &c);
	
	delta = b*b - 4*a*c;
	
	if(delta>0)
	{
		x1 = (b + sqrt(delta))/2*a;
		x2 = (-b + sqrt(delta))/2*a;
		
		printf("x1 = %lf, x2 = %lf\n", x1, x2);
	}
	else if(delta=0)
	{
		x1 = (b + sqrt(delta))/2*a;
		x2 = x1;
		printf("x1 = x2 = %lf\n", x1); 
	}
    else
    {
    	printf("方程无解\n"); 
	}
	
	return 0;
	
 } 
