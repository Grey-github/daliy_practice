#include <iostream>

void HelloWorld(int a)
{
    std::cout << "Hello World! Value: " << a << std::endl;
}

int main()
{
    typedef void(*HelloWorldFunction)(int);

    HelloWorldFunction function = HelloWorld;

    //auto function = HelloWorld;

    function(7);
    function('f');

    return 0;
}