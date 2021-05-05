# include <iostream>
using namespace std;

int main()
{
	double a, b, c; 
	char ch; 
	do
	{
		cout<<"请依次输入三角形的三边，并用空格隔开每个数据" <<endl;
		cin>>a>>b>>c;
		 
		if (a + b > c && a + c >b && b + c > a)
			{
			if (a == b == c)
				cout<<"此三角形是等边三角形"<<endl;
			else if (a == b || b == c || a == c)
				cout<<"此三角形是等腰三角形"<<endl;
			else if (a != b && b != c && a != c) 
				cout<<"此三角形既不是等边也不是等腰三角形"<<endl; 
			}
		else
			cout<<"输入的值不是三角形三边"<<endl; 
		
		cout<<"你是否要继续，继续请输入y或Y，退出请输入n或N"<<endl;
		cin>>ch; 
	}while(ch == 'y'|| ch == 'Y');
	
	return 0;
} 
