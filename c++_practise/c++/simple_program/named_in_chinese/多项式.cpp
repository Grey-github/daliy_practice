# include <iostream>
using namespace std;
int p(int x, int n)
{
	if (n==0)
		return 1;
	else if (n==1)
		return x;
	else if (n>1)
		return ((2*n-1)*p(x, n-1)-(n-1)*p(x, n-2))/n;
}
int main()
{
	int x, n;
	cout<<"请输入x和n的值"<<endl; 
	cin>>x>>n;
	cout<<"多项式的值为："<<p(x, n)<<endl;
} 
