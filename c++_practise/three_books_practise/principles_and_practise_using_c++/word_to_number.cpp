#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cout<<"Please input a number in English (between zero and four):"<<endl;
	cin>>word;
	
	if (word == "zero")
	{
		cout<<"0"<<endl;
	}
	else if (word == "one")
	{
		cout<<"1"<<endl;
	}
	else if (word == "two")
	{
		cout<<"2"<<endl;
	}
	else if (word == "three")
	{
		cout<<"3"<<endl;
	}
	else if (word == "four")
	{
		cout<<"4"<<endl;
	}
	else
	{
		cout<<"This is not the number I know"<<endl;
	}
	
	return 0;
}
