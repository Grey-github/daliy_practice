#include <iostream>
using namespace std;

int main()
{
	int value;
	cout<<"Please input an integer:"<<endl;
	cin>>value;
	
	if (value % 2 == 0)
	{
		cout<<"The value "<<value<<" is an even number"<<endl;
	} 
	else
	{
		cout<<"The value "<<value<<" is an odd number"<<endl;
	}
	return 0;
}
