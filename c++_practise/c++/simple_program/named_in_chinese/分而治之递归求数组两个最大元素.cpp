#include <iostream>
using namespace std;

void max2(int A[], int lo, int hi, int & x1, int &x2);
int main()
{
	int arr[5] = {2, 4, 5, 6, -2};
	int x1;
	int x2;
	max2(arr, 0, 5, x1, x2);
	cout<<"最大值: "<<x1<<endl;
	cout<<"次大值："<<x2<<endl;
	return 0; 
} 

void max2(int A[], int lo, int hi, int & x1, int &x2)
{
	if (lo + 2 == hi)//递归基1 
	{
		x1 = (A[lo]>A[lo+1]) ? A[lo] : A[lo+1];
		x2 = (A[lo]>A[lo+1]) ? A[lo+1] : A[lo];
		return;
	}
	if (lo + 3 == hi)//递归基2 
	{
		int max = A[lo];
		int min = A[lo]; 
		int mid;
		
		for (int i=lo; i<lo+3; i++)
		{
			if (A[i] > max)
			{
				max = A[i];
			}
			if (A[i] < min)
			{
				min = A[i];
			}	
		}
		for (int i=lo; i<lo+3; i++)
		{//赋值mid的if语句不能放在上一个循环里，
		//因为必须在已知最大值和最小值的情况下，再重新遍历一遍元素 
			if ((A[i]!=max) && (A[i]!=min))
			{ 
				mid = A[i];	
			}
		}
		x1 = max;
		x2 = mid;
		return;
	}
	int mi = (lo + hi)/2;//偶数左半边总与右半边相等，奇数右半边总是多一个元素
	int x1L, x2L;
	max2(A, lo, mi, x1L, x2L);
	int x1R, x2R;
	max2(A, mi, hi, x1R, x2R);
	if (A[x1L] > A[x1R])
	{
		x1 = x1L;
		x2 = (A[x2L] > A[x1R]) ? x2L : x1R;
	} 
	else
	{
		x1 = x1R;
		x2 = (A[x1L] > A[x2R]) ? x1L : x2R;
	}
}//T(n) = 2*T(n/2) + 2 <= 5n/3 - 2;
