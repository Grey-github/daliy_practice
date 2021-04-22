# include <iostream>
using namespace std;

int main()
{
	const int n = 20;
	int a[n];
	int *pa[n];
	int i;
	for (i=0; i<n; i++)
		a[i]=i+1;
	
	for (i=0; i<n; i++)
	{
		pa[0]=a;
		*(pa[0]+i)+=10;
		cout<<*(pa[0]+i)<<" ";
		if (i==9)
	 		cout<<endl;
	}	
} 
/*答案 
#include<iostream>

using namespace std;

int main()

{const int n=20;

  int a[n];

  int *pa[n];

  int i;

  for(i=0; i<n; i++)

  {

    a[i]=i+1;

    pa[i]=a+i; //指针数组元素赋值

    *pa[i]+=10; //数组元素值自增10

    cout<<*pa[i]<<“  ”; //输出元素值

    if((i+1)%10==0) //格式控制 

      cout<<endl;

  }

}
*/

