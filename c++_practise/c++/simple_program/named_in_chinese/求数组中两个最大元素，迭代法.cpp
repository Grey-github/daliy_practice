#include <iostream>
using namespace std;
//从数组区间A[lo,hi)中找出最大的两个整数
//A[X1]和A[x2]，元素比较的次数，要求尽可能少 A[x1]>=A[x2] 
int main()
{
	
}
void Max2(int A[], int lo, int hi, int & x1, int & x2)
{//1<n=hi-lo
	if (A[x1=lo] < A[x2=lo+1])
	{
		swap(x1, x2);
	}
	for (int i=lo+2; i<hi; i++)
	{
		if (A[x2] <A[i])
		{
			if (A[x1] < A[x2=i])
			{
				swap(x1, x2);
			}
		}
	}
	
}
//最好情况：1 + （n - 2)*1 = n - 1
//最坏情况：1 + （n - 2)*2 = 2n - 3 
void max2(int A[], int lo, int hi, int & x1, int & x2)
{ //1 < n = hi - lo
	for (x1=lo, int i=lo+1; i<hi; i++)
	{//扫描A[lo,hi),找出A[x1] 
		if (A[x1] < A[i])
		{
			x1 = i;//hi = lo - 1 = n - 1
		}
	}
	for (x2=lo, int i=lo+1; i<x1; i++)
	{//扫描A(lo,x1) 
		if (A[x2] < A[i])
		{
			x2 = i;//x1 - lo - 1
		}
	}
	for (int i=x1+1; i<hi; i++)
	{//再扫描A(x1,hi），找出A[x2] 
		if (A[x2] < A[i])
		{
			x2 = i;//hi - x1 - 1
		}
	}
}//无论如何，比较次数总是Θ(2n - 3) 
