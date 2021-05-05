# include <iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10];
	int i, j;
	for (i=0; i<10; i++)
		cin>>a[i];
	for (i=0; i<10; i++)
		b[i]=a[i];
	for (i=0; i<10; i++)
		if (a[i]<a[i+1])
		{
			j = a[i];
			a[i] = a[i+1];
			a[i+1] = j;
		}
	cout<<"最大的元素是: "<<a[0]<<endl;
	for (i=0; i<10; i++)
		if (b[i]==a[0])
			cout<<"它的下标是: "<<i<<endl;
	return 0;
} 
