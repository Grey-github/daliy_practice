//不知什么原因，直接运行无法编译成功，用命令行编译即可
//命令行编译命令如下：
// g++ point.cpp circle.cpp  point_and_circle.cpp -o point_and_circle
#include <iostream>
#include "point.h"
#include "circle.h"
using namespace std;

void isInCircle(Circle &c, Point &p)
{
    //计算两点之间距离的平方
    int distance = 
            (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
            (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()); 

    //计算半径的平方
    int rDistance = c.getR() * c.getR();
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}

int main()
{
    //创建圆
    Circle c;
    c.getR();
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    //创建点
    Point p;
    p.setX(10);
    p.setY (9);

    //判断关系
    isInCircle(c, p);

    return 0;
}