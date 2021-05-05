/*# include <iostream>
using namespace std;

int main()
{
	char a;
	int i;
	for (i=1; i<=4; i++)
	{	
		cin.get(a);
		cout<<a<<endl;
	}
	
	return 0;
}*/
#include <iostream>
using namespace std;
int main()
{ 
	int x, n = 0, s = 0;
	while( cin>>x ) //判断表达式中输入数据，用函数返回结果作判断
	{ 	
		n++, s+=x; //注意，while 语句的循环体是逗号表达式
	}
	
	cout << "n = " << n << endl << "sum = " << s << endl;

}

