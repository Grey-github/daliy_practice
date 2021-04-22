# include <iostream>
using namespace std;

int main()
{
	double grade[10];
	int i;
	double sum = 0;
	cout<<"请依次输入学生的成绩"<<endl;
	for (i=0; i<=9; i++)
	{
		cin>>*(grade+i);
		sum+=*(grade+i);
	}	
	cout<<"学生成绩的平均值是"<<endl;
	cout<<sum/10.0<<endl;
	
	return 0;
} 
