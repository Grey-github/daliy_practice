# include <iostream>
# include <string.h>
using namespace std;
int main()
{ 
	char a[20] =  {"SCUT"};
	char b[20] = {"University"};
	cout<<a<<endl;
	cout<<b<<endl;
	strcat(a,b);
	cout<<a<<endl;
}
