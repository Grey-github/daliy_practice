/*
     一定要明白该程序为什么是错误的
	 一定要明白该程序第8行生效之后程序为什么就正确了 
*/

# include <stdio.h>

//void f(void); 

void g(void)
{
	f();//因为函数f的定义放在了函数调用的后面，所以语法出错 
}

void f(void)
{
	printf("哈哈\n");
}

int main()
{
	g();
	
	return 0;
} 
