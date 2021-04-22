#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson()
{
    return { "Cherno", 24 };
}

int main()
{
    auto[name, age] = CreatePerson(); // structured binding
    std::cout << name << std::endl;
    std::cout << age << std::endl;

    // old ways to get the return tuple
    //auto person = CreatePerson();
    //std::string& name = std::get<0>(person);
    //int age = std::get<1>(person);

    //std::string name;
    //int age;
    //std::tie(name, age) = CreatePerson();
}