#include <iostream>
using namespace std;
int print(int w);
int main()
{
	int w;
	cout<<"ÇëÊäÈëwµÄÖµ"<<endl;
	cin>>w;
	print(w);
	return 0;
} 
int print(int w)
{
	int i, result=1;
	if (w>1)
	{
		for (i=1; i<=w; i++)
			cout<<w<<" ";
		cout<<endl;	
		print(w-1);
	}
	else 
	{
		cout<<"1"<<endl;
		return 0;
	}
}
