#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"请分别输入a和b的值"<<endl; 
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"a="<<a<<"\tb="<<b<<endl;
}
