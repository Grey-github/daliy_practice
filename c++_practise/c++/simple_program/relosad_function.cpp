#include <iostream>
using namespace std;

int add(int x, int y);
double add(double x, double y);

int main()
{
	int a = 2;
	int b = 3;
	double c = 4.2;
	double d = 5.2;
	cout<<add(a, b)<<endl;
	cout<<add(c, d)<<endl;
	//cout<<add(a, c)<<endl;
	//cout<<add(b, d)<<endl;实参与形参不匹配的调用会出现错误 
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}
