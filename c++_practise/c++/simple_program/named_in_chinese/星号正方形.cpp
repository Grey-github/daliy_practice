# include <iostream>
using namespace std;

int main()
{
	int i, j, len;
	cout<<"请输入正方形的边长"<<endl;
	cin>>len;
	for (i=1; i<=len; i++)
	{
		cout<<"*"<<" ";	
	} 
	cout<<endl;
	
	for (i=1; i<=len-2; i++)
	{
		for (j=1; j<=2*len; j++)
		{
			if (1 == j)
				cout<<"*";
			if (j == 2*len)
			    cout<<"*"; 
			if (j!=1&&j!=len)
				cout<<" ";	
			
		}
		cout<<endl;
	}

	for (i=1; i<=len; i++)
	{
		cout<<"*"<<" ";	
	} 
	cout<<endl;

	return 0;
} 
