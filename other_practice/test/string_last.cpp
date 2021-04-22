#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("fuck");
    for (int i=0; i<s.size(); i++)
    {
        cout << "The size of string is " << s.size() << endl;
        cout << s[i] << endl;
    }

    return 0;
}
