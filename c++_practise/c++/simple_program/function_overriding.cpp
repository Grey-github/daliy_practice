// c++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base
{
public:
    void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;
    derived1.print();

    Derived derived2;
    // pointer of Base type that points to derived2
    Base* base1 = &derived2;

    // access print() function of the Base class
    derived2.Base::print();

    // call function of Base class using ptr
    base1->print();

    return 0;
}