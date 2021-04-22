#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXTOKENS 100
#define MAXTOKENLEN 64

enum type_tag
{
	IDENTIFIER, QUALIFIER, TYPE
};

struct token
{
	char type;
	char string[MAXTOKENLEN];//定义字符数组储存标识符
};

int top = -1;
struct token stack[MAXTOKENS];//保存第一个标识之前的所有标记
struct token this;//保存刚读入的标记 

#define pop stack[top--]
#define push(s) stack[++top] = s

enum type_tag classify_string()
{//推断标识符的类型
	char *s = this.string;
	if (!strcmp(s, "const"))
	{
		strcpy(s, "read-only");
		return QUALIFIER;
	}

	if (!strcmp(s, "volatile"))
	{
		return QUALIFIER;
	}

	if (!strcmp(s, "void"))
	{
		return TYPE;
	}

	if (!strcmp(s, "char"))
	{
		return TYPE;
	}

	if (!strcmp(s, "unsigned"))
	{
		return TYPE;
	}

	if (!strcmp(s, "short"))
	{
		return TYPE;
	}

	if (!strcmp(s, "int"))
	{
		return TYPE;
	}
	
	if (!strcmp(s, "long"))
	{
		return TYPE;
	}

	if (!strcmp(s, "float"))
	{
		return TYPE;
	}

	if (!strcmp(s, "double"))
	{
		return TYPE;
	}

	if (!strcmp(s, "struct"))
	{
		return TYPE;
	}

	if (!strcmp(s, "union"))
	{
		return TYPE;
	}

	if (!strcmp(s, "enum"))
	{
		return TYPE;
	}
	
	return IDENTIFIER;
}

void gettoken()
{//读取下一个标记到“this”
	char *p = this.string;

	while ((*p = getchar()) == " ")//略过空白字符
		;

	if (isalnum(*p))//读入的标识符以字母或数字开头
	{	
		//将标识符中的每个字符依次读入this.string中
		while(isalnum(*++p = getchar()))
			;
		ungetc(*p, stdin);//当字符不为字母或数字时，将其推入输入流
		*p = '\0';//为this.string的末尾添加空字符
		this.type = classify_string();//识别标识符的类型
		return;
	}

	if (*p == '*')
	{
		strcpy(this.string, "pointer to");
		this.type = '*';
		return;
	}
	this.string[1] = '\0';
	this.type = *p;
	return;
}

void read_to_first_identifier()
{
	gettoken();
	while (this.type != IDENTIFIER)//不为标识符则入栈，直到读取到标识符
	{
		push(this);
		gettoken();
	}
	printf("%s is ", this.string);
	gettoken();
}

void deal_with_arrays()
{
	while (this.type == '[')
	{
		printf("array ");
		gettoken();
		if (isdigit(this.string[0]))
		{
			printf("0..%d ", atoi(this.string) - 1);
		}
	gettoken();
	printf("of ");
	}
}

void deal_with_function_args()
{
	while (this.type == ')')
	{
		gettoken();
	}
	gettoken();
	printf("function returning ");
}

void deal_with_pointers()
{
	while(stack[top].type == '*')
	{
		printf("%s ", pop.string);
	}
}

void deal_with_declarator()
{//处理标识符后可能存在的数组/函数
	switch(this.type)
	{
		case '[' :
			deal_with_arrays();
			break;
		case '(' : 
			deal_with_function_args();
			break;
		default :
			break;
	}


	deal_with_pointers();
//处理在读入标识符之前压入到堆栈中的符号
	while(top >= 0)
	{
		if (stack[top].type == '(')
		{
			pop;
			gettoken();//读取')'之后的符号
			deal_with_declarator();
		}
		else
		{
			printf("%s ", pop.string);
		}
	}
}

int main()
{	//将标记压入堆栈中，直到遇见标识符
	read_to_first_identifier();
	deal_with_declarator();
	printf("\n");
	return 0;
}

