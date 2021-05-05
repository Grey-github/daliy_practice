#include <iostream>
#include <cmath>
#include <string>

// Clever solution
class DigPow
{
public:
    static int digPow(int n, int p)
    {
        long long sum = 0;
        for (char digit : std::to_string(n))
            sum += pow(digit-'0', p++);
        return (sum/n)*n==sum ? sum/n : -1;
    }
};

// My solution
class DigPow
{
public:
  static int digPow(int n, int p)
  {
    int n_init = n;
    int digit, num = 0;
    int pow=1, sum = 0;

    // 首先要先算出数字的位数
    while (n != 0)
    {
      n = n / 10;
      num++;
    }
    n = n_init;

    while (n != 0)
    {
      digit = n % 10;
      n = n / 10;
      if (digit == 0)
        pow = 0;
      else
      {
        pow = 1;
        for (int i=1; i<=p+num-1; i++)
        {
          pow *= digit;
        }
      }
      sum += pow;
      num--;
    }

    return (sum%n_init == 0) ? sum/n_init : -1;
  }
};

int main()
{
    std::cout << DigPow::digPow(695, 2) << std::endl;;

    return 0;
}
