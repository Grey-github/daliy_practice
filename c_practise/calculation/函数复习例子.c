# include <stdio.h>

//void f(int i)  这个void意味着这个函数没有返回值 



int f(int i)
{
	return 10.8;
}

int main()
{
	float i = 99.9;
	
	printf("%f\n", i); 
	
	i = f(5);
	
	printf("%f\n", i);
	
	return 0;
}
