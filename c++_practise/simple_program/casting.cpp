#include <iostream>

class Base
{
public:
    Base() {}
    virtual ~Base() {}
};
class Derived : public Base
{
public:
    Derived() {}
    ~Derived() {}
};

class AnotherClass : public Base
{
public:
    AnotherClass() {}
    ~AnotherClass() {}
};

int main()   
{
    double value = 5.25;
    double a = (int)value + 5.3;

    double s = static_cast<int>(value) + 5.3;

    Derived* derived = new Derived();

    Base* base = derived;

    AnotherClass* ac = dynamic_cast<AnotherClass*>(base);

    return 0;
}