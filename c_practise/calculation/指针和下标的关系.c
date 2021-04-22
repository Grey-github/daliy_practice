# include <stdio.h>

int main()
{
	int a[5];
	
	printf("%d\n", a[4]);
	printf("%d\n", a[3]);
	printf("%d\n", a[2]);
	printf("%d\n", a[1]);
	printf("%d\n", a[0]);
	printf("%d\n", a);
	printf("%d\n", a+1);
	printf("%d\n", a+2);
	printf("%d\n", *a);
	printf("%d\n", *(a+2));
	printf("%d\n", *(a+1));
	
	if (a[0] == *(a+0)) 
	    printf("你的推测是正确的\n");
	else
	    printf("你的推测是错误的\n");
	
	return 0;
}
