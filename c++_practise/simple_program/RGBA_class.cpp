#include <iostream>
#include <cstdint>
using namespace std;

class RGBA
{
private:
    uint_fast8_t m_red;
    uint_fast8_t m_green;
    uint_fast8_t m_blue;
    uint_fast8_t m_alpha;

public:
    RGBA(uint_fast8_t red, uint_fast8_t green,
         uint_fast8_t blue, uint_fast8_t alpha = 255)
        : m_red{red},
          m_green{green},
          m_blue{blue},
          m_alpha { alpha }
        {}
    
    void print()
    {
        cout << "r = " << (int)m_red << '\t' << "g = " << (int)m_green
             << '\t' << "b = " << (int)m_blue << '\t' << "a = " << (int)m_alpha << endl;
    }
};
int main()
{
    RGBA teal{0, 127, 127};
    teal.print();

    return 0;
}