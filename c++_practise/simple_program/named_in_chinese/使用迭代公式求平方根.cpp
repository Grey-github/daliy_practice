# include <iostream>
# include <iostream>
using namespace std;

int main()
{
	int a, i;
	double x1, x2;
	cout<<"请输入一个正整数，并输入你认为的正整数的平方根的近似值（并不需要太精确）"<<endl;
	cin>>a>>x1;
	for (i=1; i<=5; i++)
	{
		x2 = (x1 + a/x1)/2;
		x1 = x2;
	} 
	
	cout<<"正整数的平方根为："<<x2;
	
	return 0; 
}

 
