#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	double a,b,c;
	cout<<"请输入直角三角形两直角边长度，并用空格隔开"<<endl; 
	cin>>a>>b;
	c=sqrt(a*a+b*b);
	cout<<"斜边长度为"<<c<<endl;
	return 0; 
	
}
