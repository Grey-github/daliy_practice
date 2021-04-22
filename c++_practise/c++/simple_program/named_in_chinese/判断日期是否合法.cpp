# include <iostream>
using namespace std;

int main()
{
	int month, day, year;
	
	cout<<"请按照mm dd yyyy的格式输入日期, 如 06 16 2018"<<endl;
	cin>>month>>day>>year;
	
	if (month>12)
		cout<<"输入的日期合法"<<endl;
	else
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				if (day <= 31)
					cout<<"输入的日期合法"<<endl;
				else 
					cout<<"输入的日期不合法"<<endl; 
				
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if (day <= 30)·· 
					cout<<"输入的日期合法"<<endl;
				else 
					cout<<"输入的日期不合法"<<endl;
			}
			break;
			case 2:	
			{
				if (year%4==0 && day<=29)
					cout<<"输入的日期合法"<<endl;
				else if (year%4==0 && day>29)
					cout<<"输入的日期不合法"<<endl;
				else if (year%4!=0 && day<=28)
					cout<<"输入的日期合法"<<endl;
				else if (year%4!=0 && day>28)
					cout<<"输入的日期不合法"<<endl;
			}
		}
	
	return 0; 
}
