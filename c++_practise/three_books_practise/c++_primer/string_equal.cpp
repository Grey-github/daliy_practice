#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;

    cout << "Please input the first string: " << endl;
    cin >> s1;
    cout <<"Please input the second string: " << endl;
    cin >> s2;

    //比较两个string的大小
    if (s1 == s2)
    {
        cout << "string " << s1
             << " is equal to "
             << "string " << s2
             << endl;
    }
    else if (s1 > s2)
    {
        cout << "string " << s1
             << " is bigger to "
             << "string " << s2
             << endl;
    }
    else if (s1 < s2)
    {
        cout << "string " << s1
             << " is less than "
             << "string " << s2
             << endl;
    }
    else
    {
        cout << "What's wrong with you?'" << endl;
    }
    //比较两个string的长度
    if (s1.size() == s2.size())
    {
        cout << "Two strings have the same length" << endl;
    }
    else if (s1.size() < s2.size())
    {
        cout << "The length of string " << s1
             << " is less than" << s2 << endl;
    }
    else
    {
        cout << "The length of string " << s1
             << " is bigger than" << s2 << endl;
    }

    return 0;
}
