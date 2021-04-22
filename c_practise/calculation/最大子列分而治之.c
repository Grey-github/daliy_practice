#include <stdio.h>

int max_of_three(int a, int b, int c);
int maxsum(int list[], int left, int right);
int max_subsequence(int list[], int n);
//运行结果有误，无法排除 
int main()
{
	int n;
	int i;
	scanf("%d", &n);
	int a[n]
	;
	int max_sub;
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	max_sub = maxsum(a, 0, n - 1);
	printf("%d", max_sub);
	return 0;
} 


int maxsum(int list[], int left, int right)
{
	int i;
	int left_max;
	int right_max;
	int left_maxsum;
	int right_maxsum;
	int left_sum;
	int right_sum;
	int center;//求出中点，当数列为奇数个时中点为中心元素，为偶数个时中点为n/2 - 1;
	
	if (left == right)//递归终止条件 
	{
		if (list[left] > 0)
		{
			return list[left];
		}
		else
		{
			return 0;
		}
		
	}
	//如不符合条件，则继续递归 
	center = (left + right)/2;
	left_maxsum = maxsum(list, left, center);//中点左边的最大子列和 
	left_maxsum = maxsum(list, center + 1, right);//中点右边的最大子列和 
	
	left_sum = 0;
	left_max = 0;
	for(i=center; i>=left; i--)//求出跨越中点的最大子列的左半部分left_max 
	{
		left_sum += list[i];
		if (left_sum > left_max)
		{
			left_max = left_sum;
		} 
	}
	right_sum = 0;
	right_max = 0;
	for(i=center+1; i<=right; i++)//求出跨越中点的最大子列的右半部分right_max 
	{
		right_sum += list[i];
		if (right_sum > right_max)
		{
			right_max = right_sum;
		}
	} 
	/*调用函数判断中点左边的最大子列，中点右边的最大子列，
	与跨越中点的最大子列中的最大值，并且返回它 */
	return max_of_three(left_maxsum, right_maxsum, left_sum + right_sum);
	 
	
}

int max_of_three(int a, int b, int c)
{
	return (a>b)?(a>c?a:c):(b>c?b:c);
}

int max_subsequence(int list[], int n)//提供相同的函数借口 
{
	return maxsum(list, 0, n - 1);
}
