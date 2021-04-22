# include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	double sum, average, min1, min2, min;
	double max1, max2, max, pro;
	cout<<"请输入4个整数"<<endl;
	cin>>a>>b>>c>>d;
	sum = a+b+c+d;
	average = sum/4.0;
	pro = a*b*c*d;
	min1 = (a<b)?a:b;
	min2 = (c<d)?c:d;
	min = (min1<min2)?min1:min2;
	max1 = (a>b)?a:b;
	max2 = (c>d)?c:d;
	max = (max1>max2)?max1:max2;
	cout<<"4个数的和为"<<endl;
	cout<<sum<<endl;
	cout<<"4个数的平均值为"<<endl;
	cout<<average<<endl;
	cout<<"4个数的乘积为"<<endl;
	cout<<pro<<endl;
	cout<<"4个数的最小值为"<<endl;
	cout<<min<<endl;
	cout<<"4个数的最大值为"<<endl;
	cout<<max<<endl;
}
