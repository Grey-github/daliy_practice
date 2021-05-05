#include <iostream>

int main()
{
    int j = 1;
    for (int i=0, j=1; i<10; i++)
    {
        std::cout << j << std::endl;
        j++;
    }
    std::cout << j << std::endl;

    return 0;
}
