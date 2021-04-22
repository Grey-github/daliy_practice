#include<iostream>
using namespace std;
int inputAry(int**ary,int n);
int outputAry(int**ary,int n,int k);
int main()
{
	int *pa, n, k;
	cout<<"输入矩阵的阶，n = ";
	cin>>n;
	pa=new int[n*n];
	inputAry(&pa, n);
	cout<<"输入行号，k = ";
	cin>>k;
	outputAry(&pa, n, k-1);
}
int inputAry(int**ary,int n)
{
	int i;
	for (i=0;i<n*n;i++)
		cin>>*(*ary+i);
}
int outputAry(int**ary,int n,int k)
{
	int i;
	for (i=k*n;i<(k+1)*n;i++)
		cout<<*(*ary+i)<<" ";
}
