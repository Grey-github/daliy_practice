# include <iostream>
# include <time.h>
# include <stdlib.h>
using namespace std;

int main()
{
	int a[10];
	int i, j;
	srand(time(0));
	for (i=0; i<10; i++)
		a[i]=rand();
	cout<<"所有的素数是："<<endl;
	for (i=0; i<10; i++)
	{
		for (j=2; j<a[i]; j++)
		{
			if (a[i]%j==0)
				break;
		}
		if (j==a[i])
			cout<<a[i]<<" ";
	}
}
 
