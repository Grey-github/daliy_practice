//计算0~10的整数的平方和立方 
# include <iostream>
using namespace std;

int main()
{
	int i;
	
	for (i=0; i<=10; i++) 
	{	
		cout<<i*i<<'\t';
		if (i%5==0)
			cout<<endl;
	}
	for (i=0; i<=10; i++)
	{	
		cout<<i*i*i<<'\t';
	    if(i%5==0)
			cout<<endl;
	}	
	
	return 0;
} 
