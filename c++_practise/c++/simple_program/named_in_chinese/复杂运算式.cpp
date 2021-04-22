#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	int c=0;
	int i, j, k;
	int m, n, p;
	int s;
	cout<<"请分别输入m n p的值"<<endl;
	cin>>m>>n>>p;
	for (i=1; i<=m; i++)
		a+=i; 
	for (j=1; j<=n; j++)
		b+=j*j*j; 	
	for (k=1; k<=p; k++)
	    c+=k*k*k*k*k;
	s = (a+b)/c;
	cout<<"所求得的s的值为："<<s<<endl;  
	return 0;
}  
