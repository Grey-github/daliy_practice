#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 10;
	int i;
	int j;
	int k;
	double sum;
	double max = 0;
	
//	printf("Please input n: ");
//	scanf("%d", &n);
	
	double a[n];
	
	srand((int)time(0));
	for (i=0; i<n; i++)
	{
		a[i] = rand()%100;
		printf("%lf\n", a[i]);
	}

//算法1 

	for (i=0; i<n; i++)
	{
		for (j=i; j<n; j++)
		{
			for (k=i; k<=j; k++)
			{
				sum += a[k];
				if (sum > max)
				{
					max = sum;
				}
			}
		}
	}
	 
	printf("最大子列和为：%d\n", max);
}
/*
//算法2
int MaxSubseaSum2(int A[], int N)
{
	int ThisSum, MaxSum = 0;
	int i, j;
	for (i=0; i<N; i++)//i是子列左端位置
	{
		ThisSum = 0;//ThisSum是从A[i]到A[j]的子列和 
		for (j=i; j<N; j++)//j是子列右端位置 
		{
			ThisSum += A[j];//对于相同的i,不同的j，只要在j-1次循环的基础上累加上1项即可 
			
			if (ThisSum > MaxSum)//如果刚得到的这个子列和更大，则更新结果 
			{
				MaxSum = ThisSum;
			}
		}//j循环结束 
	}//i循环结束
	
	return MaxSum; 
} 

//在线处理
int MaxSubseqSum4(int A[], int N)
{
	int ThisSum, MaxSum;
	int i;
	ThisSum = 0;
	MaxSum = 0;
	for (i=0; i<N; i++)
	{
		ThisSum += A[i];//向右累加
		
		if (ThisSum > MaxSum)
		{
			MaxSum = ThisSum;//发现更大和则更新当前结果 
		}
		else if (ThisSum < 0)
		{
			ThisSum = 0;//则不可能使后面的部分和增大，抛弃之 
		} 
	} 
	return MaxSum; 
} */
