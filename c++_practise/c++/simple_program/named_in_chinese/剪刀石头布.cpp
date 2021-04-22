# include <iostream>
using namespace std;

int main()
{
	char p1, p2;
	cout<<"s代表剪刀，r代表石头，p代表布"<<endl; 
	cout<<"玩家1请输入"<<endl;
	cin>>p1;
	cout<<"玩家2请输入"<<endl;
	cin>>p2;
	if (p1 =='s')
		switch (p2)
		{
			case 's':
				cout<<"平手"<<endl;
				break;
			case 'r':
				cout<<"石头砸剪刀"<<endl;
				break;
			case 'p':
				cout<<"剪刀剪布"<<endl;
				break;
		}
	else if (p1=='r')
		switch (p2)
		{
			case 's':
				cout<<"石头砸剪刀"<<endl;
				break;
			case 'r':
				cout<<"平手"<<endl;
				break;
			case 'p':
				cout<<"布包石头"<<endl;  
				break;
		}		 
	else
		switch (p2)
		{
			case 's':
				cout<<"剪刀剪布"<<endl;
				break;
			case 'r':
				cout<<"布包石头"<<endl;
				break;
			case 'p':
				cout<<"平手"<<endl; 
				break;
		}		 		
	
	return 0;
} 
