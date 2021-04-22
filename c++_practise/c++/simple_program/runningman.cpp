# include <iostream>
# include <windows.h> 
using namespace std;
int main()
{
	int i;
    int len = 75;
	while(1)
	{
		
		len--;
		for (i=0; i<len; i++)
		{
			cout<<" ";
		}	
		cout<<" O "<<endl;
		for (i=0; i<len; i++)
		{
			cout<<" ";
		}	
		cout<<"<H>"<<endl;
		for (i=0; i<len; i++)
		{
			cout<<" ";
		}	
		cout<<"I I"<<endl;
		Sleep(1000);
		system("cls");
	}
	
	return 0;
}
