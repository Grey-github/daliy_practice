#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item myitem;
    Sales_item sum;
    std::cout << "Please input the items that have the same ISBN" << std::endl;
    std::cout <<"(Ctrl + D can end the input)" << std::endl;

    if (std::cin >> sum)
    {
        while (std::cin >> myitem)
        {
            if (sum.isbn() == myitem.isbn())
            {
                sum += myitem;
            }
            else
            {
                std::cout << sum << std::endl;
                sum += myitem;
            }
            std::cout << "The current total sales of the item is " << std::endl;
            std::cout << sum << std::endl;
        }
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    std::cout << "The total sales of the item is " << std::endl;
    std::cout << sum << std::endl;

    return 0;
}
