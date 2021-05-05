# include <iostream>
# include <cmath>
using namespace std;

int main()
{
	int password1, password2;
	int i, num1, num2, sum1=0, sum2=0;
	cout<<"请输入一个6位数的正整数"<<endl;
	cin>>password1;
	password2 = password1;
	if (password1>=100000&&password1<=999999)
	{
		for (i=5; i>=0; i--)
		{
			num1 = password1/pow(10, i);
			password1 = password1 - num1*pow(10, i);
			num1 = (num1 + 7)%10;
			sum1 = sum1 + num1*pow(10, 5-i);
		}
		cout<<sum1<<endl;
		cout<<password2<<endl;
		
	}
	else 
		cout<<"输入错误"<<endl;
		 
	return 0;
} 
