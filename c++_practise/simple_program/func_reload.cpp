#include <iostream>

using namespace std;

void func(int &a)
{
    cout << "func(int &a) is called" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a) is called" << endl;
}

void func2(int a)
{
    cout << "func2(int a ) is called" << endl;
}

void func2(int a, int b = 2)
{
    cout << "func2(int a, int b = 2) is called" << endl;
}
int main()
{
    int a = 10;
    const int &b = a;
    cout << "a equal to " << a << endl;
    cout << "The result of 'const int &b = a' is b equal to "<< b << endl;
    func(a);//func(int &a) is called
    func(10);//func(const int &a) is called
    func2(10);//当函数重载与默认参数同时出现在一个函数中时，
              //有可能出现二义性，要尽量避免
              // error: call of overloaded ‘func2(int)’ is ambiguous
    return 0;
}
