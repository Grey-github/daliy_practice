#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	double x1,x2,y1,y2,distance;
	cout<<"请分两行输入两个坐标，横坐标与纵坐标之间用空格隔开"<<endl;
	cin>>x1>>y1;
	cin>>x2>>y2;
	distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	distance=sqrt(distance);
	cout<<"两点之间的距离是"<<distance<<endl;
	return 0; 
}
