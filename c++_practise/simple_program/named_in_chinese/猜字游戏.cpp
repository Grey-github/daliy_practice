#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;
int main()
{
	int i, num, j=1000, k, h=1;
	srand(int(time(0)));
	num = rand()%1000;
	cout<<"请确定您的数字, 如果确定好了，请按回车继续。"<<endl;
	getchar(); 
	do
	{
		k = num;
		cout<<num<<endl;
		cout<<"请判断，如大于你的数字，输入1;"; 
		cout<<"小于您的数字,输入-1;与你的数字相等，输入0"<<endl;
		cin>>i;
		if (i==i)
		{
			j = num;
			while(1)
			{
				num = rand()%1000;
				if (num>k && num<j)
				{
					cout<<num<<endl;
					cout<<"请判断，如大于你的数字，输入1;"; 
					cout<<"小于您的数字,输入-1;与你的数字相等，输入0"<<endl;
					break;
				}		
			}
		}
		if (i==-1)
		{
			h = num;
			while(1)
			{
				num = rand()%1000;
				if (num>h && num<k)
				{
					cout<<num<<endl;
					cout<<"请判断，如大于你的数字，输入1;"; 
		      		cout<<"小于您的数字,输入-1;与你的数字相等，输入0"<<endl;
					break;
				}
			}
		}
	}while(i);
	return 0; 
} 
