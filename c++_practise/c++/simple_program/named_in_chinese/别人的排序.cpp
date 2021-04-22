# include <iostream>
using namespace std;
int main()
{
	int a, b, c, min, mid, max;
	cout<<"请输入三个数"<<endl;
	cin>>a>>b>>c;
	if (a>b)
	{
		max = a;
		mid = b;	
	} 
	else 
	{
		max = b;
		mid = a;
	} 
	if (c>max)
	{
		min = mid;
		mid = max;
		max = c;
	}
	else 
	{
		if (c<mid)
			min = c;
		else
		{
			min = mid;
			mid = c;
		}
	}
	cout<<min<<mid<<max;
}
