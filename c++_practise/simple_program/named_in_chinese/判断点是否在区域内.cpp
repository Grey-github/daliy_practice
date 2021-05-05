# include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout<<"请分别输入点的横坐标和纵坐标，之间用空格隔开"<<endl;
	cin>>x>>y;
	 
	if (x>-2 && x<2 && y>-2 && y<2)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	
	return 0;	
} 
