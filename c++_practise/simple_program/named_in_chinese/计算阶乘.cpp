# include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int sum = 1;
	while(1)
	{
		sum*=i;
		if (sum>=50000)
			break;
		else
			cout<<i<<" "<<sum<<endl;
		i++;
			
	}	
	
	return 0;
} 
