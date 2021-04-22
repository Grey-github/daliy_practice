# include <iostream>
using namespace std;
struct person 
{
	char name[10];
	int id;
	double salary;
};
int main()
{
	person ary[6]={"Jone",12345,339.0,"David",13916,449.0,"Marit",27519,311.0,
					"Jasen",42876,623.0,"Peter",23987,400.0,"Yoke",12335,511.0};
	int pa[6]={0,1,2,3,4,5};
	int i, j, p;
	for (i=0; i<=5; i++)
		pa[i]=ary[i].salary;
	for (i=5; i>=0; i--)
		for (j=0; j<=i; j++)
		{
			if (pa[j]>pa[j+1])
			{
				p = pa[j];
				pa[j] = pa[j+1];
				pa[j+1] = p;
			}
		}
	for (i=0; i<=5; i++)
	 	cout<<pa[i]<<" ";
	return 0;
} 
