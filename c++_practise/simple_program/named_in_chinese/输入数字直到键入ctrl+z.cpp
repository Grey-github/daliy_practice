# include <iostream>
using namespace std;

int main()
{
	int z, sum, i;
	
	cout<<"请输入数字，结束输入请按Crtl+z"<<endl;
	 
	while(cin>>z)
	{
		if (z)
			i++;
		sum += z;
	}	
	
	cout<<sum<<endl;	
}
