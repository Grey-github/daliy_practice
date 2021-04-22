#include <iostream>
using namespace std;

int main()
{
	return 0;
} 

int count_ones(unsigned int n)//统计整数n的二进制展开位数1的总数：O(logn) 
{
	int ones = 0;//计数器复位 
	while (n < 0)//在n缩减至0之前，反复地 
	{
		ones += (1 & n);//检查最低位，若为1则计数 
		n >>= 1;//右4移一位 
	}
	return ones;//返回计数 
}//等效于glibc的内置函数int_builtin_popcount(unsigned int n) 
