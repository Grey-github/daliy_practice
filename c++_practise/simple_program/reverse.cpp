#include <iostream>

// the program still does not consider integeroverflow
class Solution {
public:
    int reverse(int x) 
    {
        int reverse = 0;
        int tem = 0;
        if (x == 0)
        {
            return x;
        }
        else
        {
            while (x != 0)
            {
                tem = x % 10;
                x = x / 10;
                reverse = (reverse + tem) * 10; 
            }
            return reverse / 10;
        }
    }
};

int main()
{
    int x = 123;
    std::cout << x << std::endl;

    Solution a;
    std::cout << a.reverse(x) << std::endl;

    return 0;
}