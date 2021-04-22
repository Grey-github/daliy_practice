//经检验，C++中switch()语句括号中的表达式为int char 以及enum枚举类型
#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    char b = ' ';
//  double c = 1;经测试浮点型会报错
    enum Fuck
    {
        son, of, bitch
    };
    enum Fuck woman = bitch;
    switch (a)
    {
        case 0:
            cout<<"Fuck you!";
        case 1:
            cout<<"Fuck you!";
        default:
            cout<<"Fuck you!"<<endl;
    }
    switch (b)
    {
        case ' ':
            cout<<"Fuck you!";
        case '1':
            cout<<"Fuck you!";
        default:
			cout<<"Fuck you!"<<endl;
    }
/*  switch (c)
    {
        case 0:
            cout<<"Fuck you!";
        case 1:
            cout<<"Fuck you!";
        default:
            printf("Fuck you!\n");
    }
*/
    switch (woman)
    {
        case son:
            cout<<"Fuck you!";
        case of:
            cout<<"Fuck you!";
        case bitch:
            cout<<"Fuck you!";
        default:
		cout<<"Fuck you!"<<endl;
    }
    return 0;
}
