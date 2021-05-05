#include <iostream>
using namespace std;

int main()
{
	double d = 0;
	while(cin>>d)
	{
		int i = d;//试图压缩double型到int型 
		char c = i;//试图压缩int型到char型 
		int i2 = c;//获取该字符的整形值 
		cout<<"d == "<<d			//原始的double值 
			<<" i == "<<i			//转换成的int值 
			<<" i2 == "<<i2			//字符的int值 
			<<" char("<<c<<")\n";	//字符值 
	}
}
