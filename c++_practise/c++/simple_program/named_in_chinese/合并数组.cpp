# include <iostream>
using namespace std;
int main()
{
	int i, j, t;
	int a[4] = {1,2,3,4};
	int b[4] = {5,6,7,8};
	int c[8];
	for(i=0; i<4; i++)
	{
		c[i] = b[i];
	}
	for(i=0; i<4; i++)
	{
		c[i+4] = a[i];
	}
	for(i=7; i>=0; i--)
	{
		for(j=0; j<i; j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	}
	for(i=0; i<8; i++)
	{
		cout<<c[i]<<" ";
	}
} 
