//冒泡排序 
# include <iostream>
using namespace std;
int main()
{
	int a, b, c, t;
	
	cout<<"请输入三个整数"<<endl;
	cin>>a>>b>>c; 
	
	if (a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	else if (b>c)
	{
		t = c;
		c = b;
		b = t;
	}	
	
	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	
	return 0;
} 
