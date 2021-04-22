#include <stdio.h>

char print(char ch)
{
	if ((ch=getchar())!='\n')//最后被调用的函数最先输出字符 
	{
		print(ch);
	}
	if (ch != '\n')//防止输出回车 
	{
		printf("%c", ch);
	}
	
	return;
}

int main()
{
	char ch;
	print(ch);
	return 0;
} 
