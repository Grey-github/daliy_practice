# include <iostream>
using namespace std;
int main()
{
	enum Month
	{
		Junauary, February
	};
	
	int a;
	
	a = February;
	
	cout<<February<<endl;
	
	switch (Month)
	{
		case 1:
			cout<<"woieu"<<endl;
		case 2:
		    cout<<"i90w"<<endl;
	}
	
	return 0;
}
