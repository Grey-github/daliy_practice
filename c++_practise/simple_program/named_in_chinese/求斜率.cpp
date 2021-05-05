#include<iostream>
using namespace std;
int main ()
{
	double x1,y1,x2,y2,k;
	cout<<"请分别输入两个点的坐标，横坐标与纵坐标之间用空格隔开。输入一个坐标后回车再输入另一个坐标。"<<endl;
	cin>>x1>>y1;
	cin>>x2>>y2;
	k=(y2-y1)/(x2-x1);
	cout<<"斜率为"<<k<<endl;
	return 0;
 } 
