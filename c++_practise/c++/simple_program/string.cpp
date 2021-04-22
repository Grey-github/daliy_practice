#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
    std::cout << string << std::endl;
}

int main()
{
    std::string name = std::string("Cherno") + " great";
    PrintString(name);
    bool contains = name.find("eat") != std::string::npos; 

    return 0;
}