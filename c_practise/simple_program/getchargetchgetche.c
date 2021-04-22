#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	char *ch;
/*	while(c = getchar())
	{
		printf("******\n");
		printf("%c",c);
	}*/
	while(c = getch())
	{
		printf("______");
		printf("%c",c);
	}	
	
	printf("______\n");
	c = getche();
	return 0;
}
/*3.在不同平台，输入回车，getch()将返回不同数值，而getchar()统一返回10(即\n)

1)windows平台下ENTER键会产生两个 转义字符 \r\n，因此getch返回13(\r)。

2)unix、 linux系统中ENTER键只产生 \n ，因此getch返回10(\n)。

3)MAC OS中ENTER键将产生 \r ，因此getch返回13(\r)。*/
//转义字符"\r"的作用是把光标移到当前的行首，而转义字符"\n"是把光标下一行首。
