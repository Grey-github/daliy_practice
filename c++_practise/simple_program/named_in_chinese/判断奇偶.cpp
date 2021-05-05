# include <iostream>
using namespace std;
int binary(int n)
{
	int binary=0, j=1;
	while(n)
	{
		binary = binary + j*(n%2);
		n = n/2;
		j*=10;
	} 
	return binary;
}
int main()
{
	int n;
	cout<<"请输入一个正整数: "<<endl;
	cin>>n;
	if ((binary(n)-1)%2==0)
	    cout<<"整数为奇数"<<endl;
	else 
	    cout<<"整数为偶数"<<endl;
	return 0;
} 
