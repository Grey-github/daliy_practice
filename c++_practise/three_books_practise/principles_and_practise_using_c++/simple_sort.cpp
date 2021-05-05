#include <iostream>
using namespace std;

int main()
{
	int value1;
	int value2;
	int value3;
	cout<<"Please input three integers, divide them with blank"<<endl;
	cin>>value1>>value2>>value3;
	
	if ((value1<=value2) && (value2<=value3))//一共有六种情况，一种情况对应一条输出语句 
	{
		cout<<value1<<","<<value2<<","<<value3<<endl;
	}
	else if ((value1<=value3) && (value3<=value2))
	{
		cout<<value1<<","<<value3<<","<<value2<<endl;
	}
	else if ((value2<=value3) && (value3<=value1))
	{
		cout<<value2<<","<<value3<<","<<value1<<endl;
	}
	else if ((value2<=value1) && (value1<=value3))
	{
		cout<<value2<<","<<value1<<","<<value3<<endl;
	}
	else if ((value3<=value2) && (value2<=value1))
	{
		cout<<value3<<","<<value2<<","<<value1<<endl;
	}
	else if ((value3<=value1) && (value1<=value2))
	{
		cout<<value3<<","<<value1<<","<<value2<<endl;
	}
	else
	{
		cout<<"Are you kidding me?"<<endl;
	}
	return 0;
} 
