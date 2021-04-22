#include <iostream>
using namespace std;

int main()
{
	int double = 0;//不能用关键字命名 
	int string = 0;//以标准库中的类型命名可通过编译，但是不推荐
	int _foo = 0;//虽然可以通过编译，但不要使用以下划线开头的命名，避免与系统命名冲突 
	int 7dk = 9;//以数字开头的命名不合法 
	double foo = 1;
	double f00 = 1;
	double f11 = 0;//避免使用数字零（0）、数字壹（1）、
	double fll = 0;//字母小o、字字母大O命名变量，以免引起混淆
	return 0;
}
