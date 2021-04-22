#include <iostream>
#include <string>

class Entity
{
private:
    int m_X, m_Y;
    mutable int var;
public:
    int GetX() const 
    {
        var = 2;
        return m_X;
    }

    void SetX(int x)
    {
        m_X = x;
    }
};

void PrintEntity(const Entity& e)
{
    std::cout << e.GetX() << std::endl;
}
int main()
{
    const int MAX_AGE = 90;

    const int * const a = new int;

    //*a = 2;
    //a = (int *)&MAX_AGE;
    //a = nullptr;
    std::cout << *a << std::endl;

}