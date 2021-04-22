// overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:

    // constructor to initialize count to 5
    Count() : value(5){}

    // overload ++ when used as prefix
    Count operator ++ ()
    {
        Count temp;

        // Here , value is the value attribute of the calling object
        temp.value = ++value;
        
        return temp;
    }

    // overload ++ when used as postfix
    Count operator ++ (int)
    {
        Count temp;
        // Here, value is the value attribute of the calling object
        temp.value = ++value;
        return temp;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count, result;

    // call the "Count operator ++ ()" function
    result = ++count;
    result.display();

    // calll the "Count operator ++(int)" function
    result = count++;
    result.display();

    return 0;
}