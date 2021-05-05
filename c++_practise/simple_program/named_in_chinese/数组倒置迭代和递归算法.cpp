#include <iostream>
using namespace std;

void reverse(int *, int, int);//重载的倒置算法原型 
void reverse(int *A, int n);//数组倒置（算法的初始入口)，调用的可能是reverse()的递归版或迭代版 

int main()
{
	int arr[6] = {1, 3, 4, 7, 9, 0};
	reverse(arr, 6);
	for (int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
	}
} 

void reverse(int *A, int n)
{
	reverse(A, 0, n - 1);//由重载的入口启动递归或迭代算法 
}

void reverse(int *A, int lo, int hi)//数组倒置（多递归基递归版） 
{
	if (lo < hi)
	{
		swap(A[lo], A[hi]);//交换A[lo]和A[hi]; 
		reverse(A, lo + 1, hi - 1);//递归倒置A(lo, hi)
	}//else隐含了两种递归基 	 
}//O(hi - lo + 1) 

void reverse(int *A, int lo, int hi)//数组倒置(直接改造而得的迭代版) 
{ 
	next://算法起始位置添加跳转标志 
		if (lo < hi)
		{
			swap(A[lo], A[hi]);//交换A[lo]和A[hi] 
			lo++;
			hi--;//收缩待倒置区间 
			goto next;//跳转至算法体系的起始位置，迭代地倒置A(lo,hi) 
		} 	
}//O(hi - lo + 1)

void reverse(int *A, int lo, int hi)//数组倒置(规范整理之后的迭代版) 
{
	while (lo < hi)//用while替换跳转标志和if，完全等效 
	{
		swap(A[lo++], A[hi--]);//交换A[lo]和A[hi]，收缩待倒置区间 
	}
}//O(hi - lo + 1) 
