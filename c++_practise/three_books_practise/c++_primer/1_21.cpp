#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    std::cout << "Please input two Sales_items that have the same ISBN" << std::endl;
    std::cout << "(ISBN Sales Price): " << std::endl;
    std::cin >> book1 >> book2;
    std::cout << "The total sales of the book is:" << std::endl;
    std::cout << book1 + book2 << std::endl;
    return 0;
}
