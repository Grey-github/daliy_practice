# include <iostream>
# include <math.h> 
using namespace std;
struct point
{
	double x;
	double y;
};
double distance(point a, point b)
{
	return sqrt((a.x - b.x)*(a.x - b.x ) + (a.y - b.y)*(a.y - b.y));
}
int main()
{
	int i; 
	point a[4];
	for(i=1; i<=4; i++)
	{
		cout<<"请依次输入第"<<i<<"个点的横坐标和纵坐标"<<endl;
		cin>>a[i].x>>a[i].y;
	}
	if( distance(a[1],a[2]) == distance(a[2],a[3])&&
	    distance(a[2],a[3]) == distance(a[3],a[4])&&
		distance(a[3],a[4]) == distance(a[4],a[1])&&
		distance(a[4],a[1]) == distance(a[1],a[2])&&
		distance(a[1],a[3]) == distance(a[2],a[4]))
		cout<<"四点围成的多边形为正方形"<<endl;
	else
	    cout<<"四点围成的多边形不为正方形"<<endl;
	
	return 0;
}
