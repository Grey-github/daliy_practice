# include <iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	int h,p,l,t;
	cin>>i>>j;
	int a[i][j];
	int b[i][j][k];
	int c[t];
	for (h=0;h<i;h++)
		for (p=0;p<j;p++)
		{	
			cin>>a[h][p];
			c[h+p]=a[h][p];
			cout<<c[h+p]<<" ";
		}
	cout<<endl;
	for (h=0;h<i;h++)
		for (p=0;p<j;p++)	
		{	
			cin>>b[h][p][0];
			c[h+p]=b[h][p][0];
			cout<<c[h+p]<<" ";
		}
	cout<<endl;
	return 0;
} 
			
		
