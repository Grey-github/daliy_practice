# include <iostream>
using namespace std;
int main()
{
	int i;
	char str[]={'S','c','u','t','e','r','\0'};
	for (i=0; i<7; i++)
		cout<<str[i];
	cout<<endl;
	cout<<str;
	return 0;
} 
