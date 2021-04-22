# include <iostream>
using namespace std;
int power(int base, int e);
int main()
{
	int base, e;
	cout<<"请分别输入指数的的底数和指数，如：二的平方输入2 2"<<endl;
	cin>>base>>e;
	cout<<"计算所得指数的值为："<<endl;
	cout<<power(base,e)<<endl;
} 
//计算指数的值 
int power(int base, int e)
{
	if (e>1)
		return base*power(base, e-1);
	else if (e = 1) 
		return base;
	else 
		return 1; 
}
