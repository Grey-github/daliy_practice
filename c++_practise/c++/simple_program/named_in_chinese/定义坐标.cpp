# include <iostream>
using namespace std;
struct Point
{
	int x;
	int y;
};
int Line(Point a,Point b)
{
	if(a.x == b.x)
		cout<<"两点连线为垂直线"<<endl;
	else if(a.y == b.y)
		cout<<"两点连线为水平线"<<endl;
	else if (a.x!=b.x && a.y!=b.y)
		cout<<"两点连线为斜线"<<endl;
	else 
		cout<<"两点重合"<<endl;
}
int main()
{
	Point a, b;
	cout<<"请输入a点的坐标"<<endl;
	cin>>a.x>>a.y;
	cout<<"请输入b点的坐标"<<endl;
	cin>>b.x>>b.y;
	Line(a,b);
	return 0;
}

