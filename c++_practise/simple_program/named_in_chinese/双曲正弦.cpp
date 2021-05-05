# include <iostream>
# include <cmath>
using namespace std;
double sh(double t)
{
	return (exp(t)-exp(-t))/2;
}
int main()
{
	int x, y;
	cout<<"请输入x的值"<<endl;
	cin>>x;
	y = sh(1 + sh(x))/(sh(2*x) + sh(3*x));
	cout<<"计算所得y的结果为: "<<y<<endl;
}
