# include <iostream>
using namespace std;

int main()
{
	int i, a, b, c;
	cout<<"100~999之间的水仙花数有："<<endl; 
	
	for (i=100; i<=999; i++)
	{
		a = i/100;
		b = i%10;
		c = i/10 - i/100*10;
		if (i == a*a*a + b*b*b + c*c*c)
			cout<<i<<endl;
    }
	
	return 0;
} 
