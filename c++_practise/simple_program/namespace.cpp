#include <iostream>
#include <string>
#include <algorithm>

namespace apple {

    namespace functions {

        void print(const char *text)
        {
            std::cout << text << std::endl;
        }

        void print_again() {}
    }
}

namespace orange {

    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}

int main()
{
    namespace a = apple::functions;

    a::print();
    apple::print_again();

    return 0;
}