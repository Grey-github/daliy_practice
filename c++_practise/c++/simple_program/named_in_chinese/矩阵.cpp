# include <iostream>									
using namespace std;

int **create()
{
	int i, j;
	int b[5][5] = {{1,1,1,1,1},{2,1,1,1,1},{3,2,1,1,1},{4,3,2,1,1},{5,4,3,2,1}};
	int **a = new int*[5];
	for(i=0; i<5; i++)
	{
		a[i] = new int[5];
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			a[i][j] = b[i][j];
		}
	}
	return a;
}
int **delete_(int **a)
{
	int i ,j;
	int **b = new int*[3];
	for (i=0; i<3; i++)
	{
		b[i] = new int[3];
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			b[i][j] = a[i+1][j+1];
		}
	}
	for(int i=0; i<5; i++)
	{
		delete a[i];
	}		
	delete a;
	return b;																							
}
int sum(int **b)
{
	int i, j, sum=0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j)
			{
				sum+=b[i][j];
			}
		}
	}
}
int travel(int **b)
{
	int i, j;
    for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
int	main()
{
	int i;
    int **a = create();
    int **b = delete_(a);
    travel(b);
	for(i=0; i<3; i++)
	{
		delete b[i];
	}		
	delete b;
} 
