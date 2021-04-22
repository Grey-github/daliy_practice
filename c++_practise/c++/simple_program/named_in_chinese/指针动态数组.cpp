# include <iostream>
using namespace std;
void App(int**pa,int len);
int main()
{
	int *ary = NULL,i,n;
	cout<<"n=";
	cin>>n;
	App(&ary,n);
	for (i=0;i<n;i++)
	{
		ary[i]=10+i;
		cout<<ary[i]<<" ";
	}
	delete []ary;
	return 0;
}
void App(int**pa,int len)
{
	int i;
	*pa = new int[len];
	if (*pa==NULL)
		cout<<"allocation falure\n";
	for (i=0;i<len;i++)
		*(*pa+i)=0;
}
