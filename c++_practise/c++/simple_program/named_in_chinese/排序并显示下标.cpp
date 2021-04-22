# include <iostream>
# include <time.h>
# include <stdlib.h>
using namespace std;

int main()
{
	int a[10], b[10], i, j, t;
	srand(time(0));
	for (i=0; i<10; i++)
		a[i]=rand();
	cout<<"数组中的元素为："<<endl;
	for (i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for (i=0; i<10; i++)
		b[i]=a[i];
	for (i=9; i>=0; i--)
		for (j=0; j<=i; j++)
		{
			if (a[j]<a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	cout<<"数组中的数从大到小排序为："<<endl; 
	for (i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cout<<"元素在原数组中的小标为："<<endl;
	for (i=0; i<10; i++)
		for (j=0; j<10; j++)
		{
			if (a[j]==b[i])
			{
				cout<<i<<" ";
			}
		}
	return 0;
}
