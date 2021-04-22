#include<iostream>
using namespace std;
int rand(int m, int n)
{
    static int r;             //默认初始值为0
    do
    {
        r = (25173 * r + 13849) % 65536;
    } while (r < m||r >= n);
    return r;
}
void add(int, int*,double*);
void sub(int, int*,double*);
void mul(int, int*,double*);
void div(int, int*,double*);
void grade(int *);
void correct(int *, double *);

int main()
{
    
    int wrong[4];
    double answer[4] = { 0 };         
    int diff;              //难度选择
    bool  n;
    cout << "是否要进行测试：" << endl;
    cout << "1.是\t2.不" << endl;
    cout << "请选择：";
    cin >> n;
    while (n==1)
    {
        cout << "请选择难度：\n";
        cout << "1.简单\n2.困难\n";
        cin >> diff;
        cout << "请选择一种题型：\n";
        int type;                     //题型
        cout << "1.加法\n"
            << "2.减法\n"
            << "3.乘法\n"
            << "4.除法\n";
        cin >> type;
        switch (type)                             //选择题型
        {
        case 1:add(diff, wrong, answer); break;
        case 2:sub(diff, wrong, answer); break;
        case 3:mul(diff, wrong, answer); break;
        case 4:div(diff, wrong, answer); break;
        }
        grade(wrong);
        correct(wrong, answer);
        //循环改变条件
        cout << "是否继续测试：" << endl;
        cout << "1.是" << endl << "2.否" << endl;
        cin >> n;

        
    }
    
}
void add(int diff,int *wrong,double *answer)
{
    int result, a, b;
        for (int i = 0; i < 4; i++)
        {
            if (diff==1)
            {
                a = rand(0, 10);
                b = rand(0, 10);
            }
            else
            {
                a = rand(10, 100);
                b = rand(10, 100);
            }
            cout << a << " + " << b << " = ";
            cin >> result;
            if (result == a + b)
            {
                wrong[i] = 1;
            }
            else
            {
                wrong[i] = 0;
                answer[i] = a+b;
            }
        }
}
void sub(int diff, int *wrong, double *answer)
{
    int result, a, b;
    for (int i = 0; i < 4; i++)
    {
        if (diff==1)
        {
            a = rand(0, 10);
            b = rand(0, 10);
        }
        else
        {
            a = rand(10, 100);
            b = rand(10, 100);
        }
        cout << a << " - " << b << " = ";
        cin >> result;
        if (result == a - b)
        {
            wrong[i] = 1;
        }
        else
        {
            wrong[i] = 0;
            answer[i] = a - b;
        }
    }
}
void mul(int diff, int *wrong, double *answer)
{
    int result, a, b;
    for (int i = 0; i < 4; i++)
    {
        if (diff==1)
        {
            a = rand(0, 10);
            b = rand(0, 10);
        }
        else
        {
            a = rand(10, 100);
            b = rand(10, 100);
        }
        cout << a << " * " << b << " = ";
        cin >> result;
        if (result == a * b)
        {
            wrong[i] = 1;
        }
        else
        {
            wrong[i] = 0;
            answer[i] = a * b;
        }
    }
}
void div(int diff, int *wrong, double *answer)
{
    int  a, b;
    double result;
    for (int i = 0; i < 4; i++)
    {
        if (diff==1)
        {
            do
            {
                a = rand(0, 10);
                b = rand(0, 10);
            } while (!a/b);
        }
        else
        {
            int temp;
            do
            {
                a = rand(10, 100);
                
                b = rand(0, 100);
            } while (a%b!=0);
        }
        cout << a << " / " << b << " = ";
        cin >> result;
        if (result == (double)a / b)
        {
            wrong[i] = 1;
        }
        else
        {
            wrong[i] = 0;
            answer[i] = (double)a / b;
        }
    }
}
void grade(int *wrong)
{
    int grade = 0;
    for (int i = 0; i < 4; i++)
    {
        grade += wrong[i] * 25;
    }
    cout << "你的成绩是 ：" << grade << endl;
}
void correct(int *wrong, double *answer)
{
    int flag = 0;
    for (int i = 0; i < 4; i++)
    {
        if (!wrong[i])
        {
            cout << "第" << i + 1 << "题错了，正确答案是" << answer[i] << endl;
            flag = 1;
        }
    }
    if (!flag)
    {
        cout << "恭喜你全对！" << endl;
    }
}
 
