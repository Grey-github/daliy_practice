#include <iostream>
using namespace std;

//Fibonacci数列第一项为0 
long long int binary_fib(int n);
long long int fibI(int n);
long long int linear_fib(int n, long long int& prev);
int main()
{
	int n = 60; 
	long long int prev;
	cout<<"Linear recusion"<<endl;
	cout<<linear_fib(n, prev)<<endl;
	cout<<"Iteration"<<endl;
	cout<<fibI<<endl;;
	cout<<"Biany recusion"<<endl;
	cout<<binary_fib(n)<<endl;
	
	
	return 0;
} 

long long int binary_fib(int n)//计算Fibonacci数列的第n项(二分递归版):O(2^n) 
{
	//若到达递归基，直接取值，否则，递归计算前两项，其和即为正解 
	return (2 > n) ? (long long int)n : binary_fib(n - 1) + binary_fib(n - 2); 
}

long long int linear_fib(int n, long long int& prev)//计算Fibonacci数列第n项(线性递归版):入口形式fib(n, prev) 
{
	if (0 == n)//若到达递归基，则 
	{
		prev = 1;
		return 0;//直接取值 :fib(-1) = 1, fib(0) = 0 
	}
	else//否则 
	{
		long long int prev_prev;
		prev = linear_fib(n - 1, prev_prev);//递归计算前两项 
		return prev_prev + prev;//将前两项相加，得到并返回当前项 
	}
}//用辅助变量记录前一项，返回数列的当前项，O(n) 

long long int fibI(int n)//计算Fibonacci数列的第n项(迭代版): O(n)
{
	long long int f = 0;//初始化：fib(0) = 0, fib(1) = 1 
	long long int g = 1;
	while (n-- > 0)
	{
		g += f;//依据原始定义，通过n次加法和减法计算fib(n) 
		f = g - f;
	}
	return f;//返回 
}
