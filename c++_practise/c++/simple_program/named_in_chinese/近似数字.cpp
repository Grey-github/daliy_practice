# include <iostream>
# include <cmath>
using namespace std;
double roundToall(double);

int main()
{
	double num;
	cout<<"请输入一个数字"<<endl;
	cin>>num;
	roundToall(num);
	return 0;
}

double roundToall(double num)
{
	double num1, num2, num3, num4;
	num1 = floor(num);
	num2 = floor(num*10 + 0.1)/10.0;
	num3 = floor(num*100.0+0.01)/100.0;
	num4 = floor(num*1000.0+0.001)/1000.0;
	
	cout<<num1<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;
	cout<<num4<<endl; 
	
	return 0;
}
