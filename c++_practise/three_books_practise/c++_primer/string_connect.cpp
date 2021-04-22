#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;
    string s3;

    cout << "Please input two strings: " << endl;
    cin >> s1 >> s2;

    s3 = s1 + s2;
    cout << "After connecting two strings: " << s3 << endl;

    s3 = s1 + ' ' + s2;
    cout << "Dividing two strings with blank: " << s3 << endl;
    return 0;
}
