#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
const int N=6;
void setMatrix(int m[][N], int num);
void diagonal(int m[][N], int a[], int N);
int main()
{ 
	int m[N][N],a[2*N],i,j;
	setMatrix( m, N*N ); //调用函数，对方阵元素赋不大于100 的随机整数
	cout<<N<<"*"<<N<<"方阵:\n";
	for( i=0; i<N; i++ ) //输出方阵元素
	{
		for(j=0;j<N; j++)
		cout<<m[i][j]<< '\t';
		cout<<endl;
	}
	diagonal( m, a, N ); //调用函数，依次把m 阵的主对角线、次对角线放在数组a 中
	cout<<"对角线元素：\n";
	for( i=0; i<2*N; i++ ) //输出对角线元素
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
void setMatrix(int m[N][N], int num) 
{
	int i ,j;
	int k = sqrt(num);
	srand(int(time(0)));
	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
		m[i][j]=rand()%100;
}
void diagonal(int m[N][N], int a[], int N)
{
	int i, j, k;
	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
			{
				if (i==j)
				{
					a[k]=m[i][j];
					k++;
				}
			}
			
	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
			{
				if (i+j==5)
				{
					a[k]=m[i][j];
					k++;
				}
			}
}
