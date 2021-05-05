# include <iostream>
using namespace std;
int main()
{
	int i, j, t, a;
	int b[5] = {1,3,5,7,9};
	for(i=0; i<5; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	cin>>a;
	b[4] = a;
	for (i=4; i>=0; i--)
	{
		for(j=0; j<i; j++)
		{
			if(b[j]>b[j+1])
			{
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}
	for(i=0; i<5; i++)
		cout<<b[i]<<" ";
	return 0;		
} 
