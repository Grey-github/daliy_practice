# include <iostream>
using namespace std;
int main()
{
	int i;
	
	cout<<"在100~200之间满足用3除余2的整数有："<<endl; 
	for (i=100; i<=200; i++)
	{
		if (i%3==2)
			cout<<i<<" ";
	}		
	cout<<endl;
	
	cout<<"在100~200之间满足用7除余2的整数有："<<endl; 
	for (i=100; i<=200; i++)
	{
		if (i%7==2)
			cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"在100~200之间满足用5除余3的整数有："<<endl; 
	for (i=100; i<=200; i++)
	{
		if (i%5==3)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
} 
