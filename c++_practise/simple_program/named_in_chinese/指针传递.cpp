# include <iostream>
using namespace std;
int Factorial(int*);
int main()
{
	int k;
	cout<<"¼ÆËã½×³Ëk!,ÇëÊäÈëk"<<endl;
	cin>>k;
	cout<<k;
	cout<<"!=";
	Factorial(&k);
	
	return 0;
}

int Factorial(int *p)
{
	int k = *p;
	int i, sum;
	for (i=1; i<=k; i++)
		sum*=i;
	cout<<sum;
	return 0;
}
