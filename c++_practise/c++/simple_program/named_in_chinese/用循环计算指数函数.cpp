# include <iostream>
using namespace std;

int main()
{
	int base, e, i, result=1;
	cout<<"请分别输入指数的的底数和指数，如：二的平方输入2 2"<<endl;
	cin>>base>>e;
	
	for (i=1; i<=e; i++)
		result*=base;
		
	cout<<"计算所得指数的值为："<<result<<endl;
} 
