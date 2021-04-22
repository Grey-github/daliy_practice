# include <iostream>
# include <string>
using namespace std;
int main()
{
	char  direction[10];
	cout<<"请输入您想要去的城市"<<endl; 
	cin>>direction;
	
	switch (direction)
	{
		case "Shanghai":
			cout<<"East"<<endl;
			break;
		case "Guangzhou":
			cout<<"South"<<endl;
			break;
		case "Xian":
			cout<<"West"<<endl;
			break;
		case "Beijing":
			cout<<"North"<<endl; 
			break;
	}
	return 0;
} 
