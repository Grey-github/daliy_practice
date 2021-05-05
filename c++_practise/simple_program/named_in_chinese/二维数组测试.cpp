#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char a[][10] = {"i", "love", "your"};
	int b[][4] = {{1}, {1}, {1}};
	cout<<b[2][2]<<endl;
	char *p = a[0];
	//a[0] = a[1];利用=运算符来把字符串复制到字符数组中是不可能的 
	cout<<a<<endl;
	cout<<a[0]<<endl; 
	cout<<a[0][0]<<endl;
	cout<<a[0][10]<<endl;
	cout<<setw(3)<<p<<endl;
	cout<<p<<endl;
	cout<<(p + 10)<<endl;
} 
