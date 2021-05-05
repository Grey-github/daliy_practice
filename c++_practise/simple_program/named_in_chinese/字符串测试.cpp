#include <iostream>

using namespace std;

int main()
{
	char* t = "hello";
	char* s = "hello";
	cout<<t<<endl;
	cout<<s<<endl;

	if (t == s)
	{
		cout<<"t equals s."<<endl;
	}
	else
	{
		cout<<"t does not equals s."<<endl; 
	}
} 
