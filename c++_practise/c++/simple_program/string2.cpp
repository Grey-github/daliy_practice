#include <iostream>
#include <string>

#include <string.h>

int main()
{
    using namespace std::string_literals;

    std::string name0 = "Cherno"s + " hello";

    const char* example = R"(Line1
Line2
Line3
Line4)";

    const char* ex ="Line1\n"
            "Line2\n"
            "Line3\n"
            "Line4\n";

    std::cout << example << ex << std::endl;

    const char* name = "Cherno";
    const wchar_t* name2 = L"Cherno";
    std::cout << "sizeof wchar_t :" << sizeof(wchar_t) << std::endl;

    const char16_t* name3 = u"Cherno";
    const char32_t* name4 = U"Cherno";
    std::cout << strlen(name) << std::endl;
    
    return 0;
}