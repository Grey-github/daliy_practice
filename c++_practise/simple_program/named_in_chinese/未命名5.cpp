#include<iostream>
using namespace std;
const int N=5;
int inputAry(int*ary,int N)
{
	int i, j;
	for (i=0;i<N;i++)
		for (j=0;j<N;j++)
			cin>>ary[i][j];
}
int outputAry(int*ary,int N,int a)
{
	int i;
	for (i=0;i<N;i++)
		cout<<ary[a][i]<<" ";
}
int main()
{ 
	int ary[N][N], k;
	inputAry(*ary, N);
	cout<<"ÊäÈëÐÐºÅ£¬k = ";
	cin>>k;
	outputAry(*ary, N, k-1);
}

