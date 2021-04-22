//将一个数近似到指定的十进制数位 
# include <iostream>
# include <cmath> 
using namespace std;

int roundToIntnger(double num);
double roundToTenths(double num);
double roundToHundreths(double num);
double roundToThousandths(double num);

int main()
{
	double num;
	cout<<"请输入一个数字"<<endl;
	cin>>num;
	cout<<roundToIntnger(num)<<endl;
	cout<<roundToTenths(num)<<endl;
	cout<<roundToHundreths(num)<<endl;
	cout<<roundToThousandths(num)<<endl;
	
	return 0;
} 

int roundToIntnger(double num)//取近似整数 
{
	num=floor(num);
	return num;
}

double roundToTenths(double num)//近似到第一位小数 
{
	num = floor(num*10 + 0.1)/10.0;
	return num;
}

double roundToHundreths(double num)//近似到第二位小数
{
	num = floor(num*100.0+0.01)/100.0;
	return num;
} 

double roundToThousandths(double num)//近似到第三位小数
{
	num = floor(num*1000.0+0.001)/1000.0;
	return num;
} 
