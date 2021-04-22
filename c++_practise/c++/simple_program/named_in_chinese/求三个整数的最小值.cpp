# include <iostream>
using namespace std;

int main()
{
	int a, b, c, t;
	
	cout<<"请输入三个整数"<<endl;
	cin>>a>>b>>c;
	t = (a<b?a:b)<c?(a>b?a:b):c;
	cout<<t<<endl;
	
	return 0;
}
