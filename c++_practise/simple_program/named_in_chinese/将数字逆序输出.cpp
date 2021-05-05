# include <iostream>
using namespace std;

int main()
{
	char g;
	do
	{
	int a, b, c, d, e, f;
	
	
	cout<<"请输入一个5位数的整数"<<endl;
	cin>>f;
	
	a = f%10;
	b = f%10000%1000%100/10;
	c = f%10000%1000/100;
	d = f%10000/1000;
	e = f/10000;
	
	cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<endl;
	cout<<"请问你要继续吗(Y/N)"<<endl;
	cin>>g;
	}while(g =='Y'||g =='y');
	return 0;
	
}
