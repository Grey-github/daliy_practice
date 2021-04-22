//经测试，在C语言中，switch后的条件表达式可为整形(不可为浮点型)，字符型，或枚举类型
/*输出结果
Fuck you!Fuck you!
Fuck you!Fuck you!Fuck you!
Fuck you!Fuck you!
*/

#include <stdio.h>

int main()
{
	int a = 1;
	char b = ' ';
//	double c = 1;经测试浮点型会报错
	enum Fuck
	{
		son, of, bitch
	};
	enum Fuck woman = bitch;
	switch (a)
	{
		case 0:
			printf("Fuck you!");
		case 1:
			printf("Fuck you!");
		default:
			printf("Fuck you!\n");
	}
	switch (b)
    {
        case ' ':
            printf("Fuck you!");
        case '1':
            printf("Fuck you!");
        default:
            printf("Fuck you!\n");
    }
/*	switch (c)
    {
        case 0:
            printf("Fuck you!");
        case 1:
            printf("Fuck you!");
        default:
            printf("Fuck you!\n");
    }
*/
	switch (woman)
    {
        case son:
            printf("Fuck you!");
        case of:
            printf("Fuck you!");
		case bitch:
			printf("Fuck you!");
	    default:
            printf("Fuck you!\n");
    }
	return 0;
}
