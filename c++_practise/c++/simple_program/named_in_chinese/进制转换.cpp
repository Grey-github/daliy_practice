# include <iostream>
# include <cmath>
using namespace std;
int binary(int);
int main()
{
	int i;
	cout<<"decimal"<<'\t'<<"binary"<<'\t'<<'\t'<<"octal"<<'\t'<<"hexadecimal"<<endl;
	for (i=1; i<=256; i++)
	{
		cout<<dec<<i<<'\t';
		cout<<binary(i)<<'\t'<<'\t';
		cout<<oct<<i<<'\t';
		cout<<hex<<i<<'\t'<<endl;
	}
	return 0;
} 
int binary(int i)
{
	int binary;
	int j = 1;
	while(i)
	{
		binary= binary + j*(i%2);
		i = i/2;
		j = j*10;
	}
	return binary;
}
