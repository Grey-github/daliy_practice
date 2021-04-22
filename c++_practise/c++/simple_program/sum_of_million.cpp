#include <iostream>
using namespace std;

int main()
{//要避免数据溢出了
	long long int sum = 0;
	for (long long int i=1; i<1000001; i++)
	{
		sum += i;
		cout<<sum<<endl;
	}
	return 0;
}
