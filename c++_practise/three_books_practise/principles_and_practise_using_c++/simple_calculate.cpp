#include <iostream>
using namespace std;

int main()
{
	int value1;
	int value2;
	cout<<"Please input two integer, "
		<<"divide with blank or carriage return."<<endl; 
	cin>>value1>>value2;
	
	if (value1 > value2)//求两数中大最大最小值 
	{
		cout<<"max = "<<value1<<endl;
		cout<<"min = "<<value2<<endl; 
	}
	else
	{
		cout<<"max = "<<value2<<endl;
		cout<<"min = "<<value1<<endl;
	}
	
	cout<<"sum = "<<value1 + value2<<endl;//以下求和差积商 
	cout<<"difference = "<<value1 - value2<<endl;
	cout<<"product = "<<value1*value2<<endl;
	cout<<"quotient = "<<value1/value2<<endl;
} 
