# include <iostream>
# include <windows.h>
using namespace std;
int main()
{
	int i;
	char c;
	cout<<"ÇëÊäÈëÒ»¸ö×Ö·û"<<endl;
	cin>>c;
	while(1)
	{
		static int len = 1;
		len++;
		for (i=0; i<len; i++)
			cout<<" ";	
		cout<<c;
		Sleep(1000);
		system("cls");
	}
	
	return 0;
}
