#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string operation;//根据输入的操作符进行相应的运算
	double value1;
	double value2;
	
	cout<<"Please input the operation(+  - * /) and two values in turn."<<endl;
	cout<<"For example, + 100 3.14"<<endl;
	cin>>operation>>value1>>value2;
	
	if (operation == "+")//加法 
	{
		cout<<value1<<operation<<value2
			<<" = " <<value1 + value2<<endl;
	}
	else if (operation == "-")//减法 
	{
		cout<<value1<<operation<<value2
			<<" = " <<value1 - value2<<endl;
	}
	else if (operation == "*")//乘法 
	{
		cout<<value1<<operation<<value2
			<<" = " <<value1*value2<<endl;
	}
	else if (operation == "/")//除法 
	{
		cout<<value1<<operation<<value2
			<<" = " <<value1/value2<<endl;
	}
	else 
	{
		cout<<"This is not the operation I know"<<endl;
	}
	
	return 0;
}
