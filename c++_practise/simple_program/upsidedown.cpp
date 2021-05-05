# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int a, b[5];
	int i;
	cout<<"请输入一个5位数的正整数"<<endl;
	cin>>a;
	for (i=4; i>=0; i--)
	{
		b[i] = a%(int)pow(10, i);
		a = a - b[i]*(int)pow(10, i);
	}
	for (i=0; i<5; i++)
	    cout<<b[i]<<"  ";
	return 0;
} 
