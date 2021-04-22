#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[5];
    vector<int*> a_v(5);
    int total = 0, total_v = 0;

    for (int i=0; i<5; i++)
    {
        cin >> a[i];
        a_v[i] = &a[i];
    }

    for (int j=0; j<5; j++)
    {
        total += a[j];
        total_v += *a_v[j];//取下标运算符的优先级高于指针运算符
    }

    cout << "total=" << total << endl;
    cout << "average=" << total/5 << endl;

    cout << "total_v=" << total_v << endl;
    cout << "average=" << total_v/5 << endl;
    return 0;
}
