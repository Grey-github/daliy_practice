#include <iostream>
using namespace std;

//学生类
class Student
{
public:
    void setName(string name)
    {
        m_name = name;
    }

    void setID(int id)
    {
        m_id = id;
    }

    void showStudent()
    {
        cout << "name: " << m_name << "  " << "ID: " << m_id << endl;
    }

public:
    string m_name;
    int m_id;
};

int main()
{
    Student stu;
    stu.setName("陶瑾");
    stu.setID(512);
    stu.showStudent();

    return 0;
}
