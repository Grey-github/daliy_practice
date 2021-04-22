#include <stdio.h>

int main(void)
{
	int len = 50;
	char str[len];
	int num = 0;
	int space = 0;
	int letter = 0;
	int other = 0;
	int i;
	
	printf("Please input a string\n");
	gets(str);//使用gets()存在隐患，可用getchar()代替 
	
	while (str[i] != '\0')//依次判断每个字符的类型直到字符串的结尾 
	{
		if ((str[i]>=48) && (str[i]<=57))
		{
			num++;
		}
		else if (((str[i]>=65) && (str[i]<=90))
				||((str[i]>=97) && (str[i]<=122)))//ASCII字符可以直接用字符替换，会发生隐式类型转换 
		{
			letter++;
		}
		else if (str[i] == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
		
		i++;
	}
	
	printf("The number of numbers: %d\n", num);
	printf("The number of letters: %d\n", letter);
	printf("The number of spaces:  %d\n", space);
	printf("The number of other characters: %d\n", other);
	
	return 0;
} 
