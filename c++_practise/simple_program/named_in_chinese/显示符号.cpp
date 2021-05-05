# include <iostream>
using namespace std;

int main()
{
	int i, j, line;
	char ch;
	
	cout<<"请输入你要显示的三角形的行数和构成三角形的符号"<<endl;
	cin>>line>>ch;

    for(i=0;i<=line;i++)         
    {
		for(j=line-i;j>=0;j--)         
        	cout<<" ";

        for(j=1;j<=i*2+1;j++)         
            cout<<ch;
        cout<<endl; 
	}
    
	return 0;
}
