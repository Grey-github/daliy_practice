#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	/*在使用class之前，由于它并非程序语言本省內建，所以必须让程序
	先知道它，通常我们会含入某个头文件来完成这件事
	*/
	string posh[4] = {
		"winnie", "robin", "eeyore", "piglet"
	};
	/*class名称被称为一个型别(type)名称，就像內建型别int double
	一样，class object的初始化做法有很多种：
	*/
	string dummy("dummy");
	vector<string> svec1(4);
	vector<string> svec2(4, dummy);
	vector<string> svec3(posh, posh+4);
	/*每个class都会提供一组操作函数，让我们施行于其objects身上，
	这些操作函数包括具名函数，如size()和empty(),以及重载运算符，
	如equality(相等)和assignment(赋值)运算符等等
	*/
	if (svec2!=svec3 && !svec3.empty())
	{
		//svec2 = svec3;
	}
	if (svec2.size() == 4)
	
	cout<<"svec1 = ";
	for (int i=0; i<svec1.size(); i++)
	{
		cout<<svec1[i]<<' ';
	}
	cout<<endl;

	cout<<"svec2 = ";
	for (int i=0; i<svec2.size(); i++)
	{
		cout<<svec2[i]<<' ';
	}
	cout<<endl;

	cout<<"svec3 = ";
	for (int i=0; i<svec3.size(); i++)
	{
		cout<<svec3[i]<<' ';
	}
	cout<<endl;
}
