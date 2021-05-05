# include <iostream>
using namespace std;

int main()
{
	int grade;
	char ch, c;
	do
	{
	cout<<"请输入成绩的百分制分数"<<endl; 
	cin>>grade;
	
	if (grade>=0&&grade<=59)
		ch = 'E';
	else if (grade>=60&&grade<60)
		ch = 'D';
	else if (grade>=70&&grade<=79)
		ch = 'C';
	else if (grade>=80&&grade<=89)
		ch = 'B';
	else if (grade>=90&&grade<=100)
		ch = 'A';
	else 
		cout<<"输入数据有误，请重新输入"<<endl;
	
	switch(ch)
	{
		case 'E':
			cout<<"成绩等级是"<<"E"<<endl;
			break;
		case 'D':
			cout<<"成绩等级是"<<"D"<<endl;
			break;
		case 'C':
			cout<<"成绩等级是"<<"C"<<endl;
			break;
		case 'B':
			cout<<"成绩等级是"<<"B"<<endl;
			break;
		case 'A':
			cout<<"成绩等级是"<<"A"<<endl;
			break;
	}
	cout<<"请问你要继续吗(Y/N)"<<endl;
	cin>>c;	 
	}while(c=='Y'||c=='y');
	return 0;
} 
