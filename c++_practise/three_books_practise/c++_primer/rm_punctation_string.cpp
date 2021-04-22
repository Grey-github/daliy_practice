#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mystring("enfanhao@mail.scut.edu.cn");
    int num = mystring.size();
    for (int i=0; i<num; i++)
    {
        if (!ispunct(mystring[i]))
        {
            cout << mystring[i];
        }
    }
    cout << endl;
    return 0;
}

