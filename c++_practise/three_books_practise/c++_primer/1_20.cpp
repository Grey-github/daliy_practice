#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    std::cout << "Please input the sales record of the book" << std::endl;
    std::cout << "(ISBN Sales Price):" << std::endl;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
