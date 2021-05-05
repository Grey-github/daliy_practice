# include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	
	for (a=10; a<100; a++)
	{
		for (b=10; b<100; b++)
		{
			for (c=10; c<100; c++)
			{
				for (d=100; d<1000; d++)
				{
					if (a*b == c*d)
						cout<<a<<"*"<<b<<"=="<<c<<"*"<<d<<endl;
				}
			}
		}
	}

	return 0;
} 
