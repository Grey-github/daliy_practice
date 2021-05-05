#include <iostream>
using namespace std;

//计算用户手中的金额的总数 
int main()
{
	int penny;
	int nickel;
	int dime;
	int quarter;
	int half_dollar;
	int dollar;
	double cents;//使用double防止换算为美元使用除法时丢失精度 
	
	//询问并输出penny(1美分硬币)的数量 
	cout<<"How many pennies do you have?"<<endl;//输入提示
	cin>>penny;
	if (penny < 0)//对负数的处理
	{
		cout<<"Incorrect input. Please re-enter"<<endl;
		cin>>penny;
	} 
	if (penny == 1)//对单复数的处理
	{
		cout<<"You have 1 penny"<<endl;
	}
	else
	{
		cout<<"You have "<<penny<<" pennies"<<endl;
	}
	
	//询问并输出nickel（5美分硬币的数量） 
	cout<<"How many nickels do you have?"<<endl;//输入提示
	cin>>nickel;
	if (nickel < 0)//对负数的处理
	{
		cout<<"Incorrect input. Please re-enter."<<endl;
		cin>>nickel; 
	} 
	else if (nickel == 1)//对单复数的处理
	{
		cout<<"You have 1 nickel."<<endl;
	}
	else
	{
		cout<<"You have "<<nickel<<" nickels."<<endl;
	}
	
	//询问并输出dime(10美分硬币)的数量
	cout<<"How many dimes do you have?"<<endl;
	cin>>dime;
	if (dime < 0)//对负数的处理
	{
		cout<<"Incorrect input. Please re-enter."<<endl;
		cin>>dime;
	}
	else if (dime == 1)//对单复数的处理
	{
		cout<<"You have 1 dime."<<endl;
	}
	else
	{
		cout<<"You have "<<dime<<" dimes."<<endl;
	}
	
	//询问并输出quarters(25美分硬币)的数量 
	cout<<"How many quarters do you have?"<<endl;
	cin>>quarter;
	if (quarter < 0)//对负数的处理
	{
		cout<<"Incorrect input. Please re-enter."<<endl;
		cin>>quarter;
	}
	else if (quarter == 1)//对单复数的处理
	{
		cout<<"You have 1 quarter."<<endl; 
	}
	else 
	{
		cout<<"You have "<<quarter<<" quarters."<<endl;
	}
	
	//询问并输出half dollar(50美分硬币)的数量
	cout<<"How many half dollars do you have?"<<endl;
	cin>>half_dollar;
	if (half_dollar < 0)//对负数的处理
	{
		cout<<"Incorrect input. Please re-enter."<<endl;
		cin>>half_dollar;
	}
	else if (half_dollar == 1)//对单复数的处理
	{
		cout<<"You have 1 half_dollar"<<endl;
	} 
	else
	{
		cout<<"You have "<<half_dollar<<" half dollars"<<endl;
	}
	
	//询问并输出one-dollar(100美分硬币)的数量
	cout<<"How many dollars do you have?"<<endl;
	cin>>dollar;
	if (dollar < 0)//对负数的处理
	{
		cout<<"Incorrect input. Please re-enter."<<endl;
		cin>>dollar;
	} 
	else if (dollar == 1)//对单复数的处理
	{
		cout<<"You have 1 dollar."<<endl;
	}
	else
	{
		cout<<"You have "<<dollar<<" dollars."<<endl;
	}
	
	cents = penny + nickel*5 + dime*10 + 
			quarter*25 + half_dollar*50 + dollar*100;//计算总金额，并输出 
	cout<<"The value of all of your coins is "
		<<cents<<" cents."<<endl;
	cout<<"The value of all of your coins is $"
		<<cents/100<<endl;
		
	return 0;
}
