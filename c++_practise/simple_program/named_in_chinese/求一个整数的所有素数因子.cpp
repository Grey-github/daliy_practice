# include <iostream>
using namespace std;

int main()
{
	int a, i, j;
	cout<<"请输入一个数"<<endl;
	cin>>a; 
	for (i=2; i<=a; i++)
		if (a%i == 0)
		{
			for (j=2; j<i; ++j)
	        {
	        	if (0 == i%j)
	        	    break;
			}
			if (j == i)
			    cout<<i<<endl;
		}			
		
	return 0;
}
