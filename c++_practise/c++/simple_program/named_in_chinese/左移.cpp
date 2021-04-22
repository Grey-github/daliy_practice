# include <iostream>
using namespace std;
unsigned power2(unsigned number, unsigned pow)
{
    int result;
    result = number<<pow;
    return result;
} 
int main()
{
    int num, pow;
	cout<<"请输入一个正整数："<<endl;
	cin>>num;
	cout<<"请输入左移运算的位数："<<endl;
	cin>>pow;	
	cout<<"左移运算之后的结果为："<<power2(num, pow)<<endl;
	
	return 0;
}
