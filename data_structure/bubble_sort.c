void bubble_sort(int a[], int n)
{
	int change;
	int tmp;
	for (i=n-1, change=TRUE; i>=1 && change; --i)
	{//将a中整数序列重新排列成自小到大有序的整数序列
		change = FALSE;
		for (j=0; j<i; ++j)
		{
			if (a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				change = TRUE;
			}
		}
	}
}//bubble_sort
