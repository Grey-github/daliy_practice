#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string S)
    {
        cout << S << endl;
       string stk;
       for (char ch : S)
       {
           if (!stk.empty() && stk.back() == ch)
           {
               stk.pop_back();
           }
           else
           {
               stk.push_back(ch);
           }
       } 
       return stk;
    }
};

int main()
{
    Solution solution1;
    cout << solution1.removeDuplicates("fuck you bitch") << endl;

    return 0;
}