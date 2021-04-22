/* 题目：一个整数，它加上100后是一个完全平方数，
再加上168又是一个完全平方数，请问该数是多少？*/
//此解答是解决题目最简洁的代码
# include <stdio.h>

 int main()
 {
 	int m, n, x;
	
	for (m=1; m*m - (m-1)*(m-1)<=168; m++)
	{
		for (n=0; n<m; n++)
			{
				if (m*m - n*n == 168)
					printf("%d\n", n*n-100);
			}
	}
	return 0;
 }
