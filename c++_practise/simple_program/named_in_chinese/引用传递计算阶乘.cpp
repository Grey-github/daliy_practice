#include<iostream>
using namespace std;
int Factorial(const int& n)
{
	if (n==0)
		return 1;
	else 
		return n*Factorial(n-1);
}
int main()
{
	int k;
	cin>>k;
	cout<<k<<"!="<<Factorial(k)<<endl; 
}

