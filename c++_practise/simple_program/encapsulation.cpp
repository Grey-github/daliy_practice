/*封装
×封装是C++面向对象三大特性之一
×封装的意义：
×1.将属性和行为作为一个整体，表现生活中的事物
*2.将属性和行为加以权限控制
*封装意义一：在设计类的时候，将属性和行为写在一起，表现事物
*语法：class 类名{  访问权限:  属性  行为  };
*/

//示例一：设计一个圆类，求圆的边长

#include <iostream>
using namespace std;
//圆周率
const double PI = 3.14;

class Circle
{
public: //访问权限：公共的权限

    //属性
    int m_r; //半径

    //行为
    //获取圆的周长
    double perimeter()
    {
        //2*PI*r
        //获取圆的周长
        return 2*PI*m_r;
    }
};


int main()
{
    //通过圆类，创建圆的对象
    //c1就是一个具体圆
    Circle c1;
    c1.m_r = 10; //给圆对象的半径 进行赋值操作

    cout << "圆的周长为：" << c1.perimeter() << endl;

    return 0;
}
