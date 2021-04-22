# include <iostream>
using namespace std;

int main()
{
	int i, j, sum = 0;
	
	cout<<"1000以内的完数有："<<endl;
	 
	for (i=2; i<=1000; i++)
	{
		sum = 0;
		for (j=1; j<=i/2; j++)
		{
			if (i%j == 0)
				sum = sum + j;
		}
	if (sum == i)
		cout<<i<<endl;
	}
	
	return 0;
} 
