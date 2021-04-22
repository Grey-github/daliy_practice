#include <iostream>
#include <string>

using namespace std;

int main()
{
    char name[20];
    cout << "What's your name?(C-style)" << endl;
    cin >> name;
    cout << "Hello, " << name << " , have a nice day!" << endl;

    string s_name;
    cout << "What's your name?(string)" << endl;
    cin >> s_name;
    cout << "Hello, " << s_name << " , have a nice day!" << endl;
    return 0;
}
