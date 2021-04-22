# include <iostream>
# include <cmath>
using namespace std;

int main()
{
	int i, x1=0;
	double x2;
	double pi = 3.14159;
	for (i=0; x1<=180; i++)
	{
		x2 = x1*pi/180.0;
		cout<<"sin"<<x1<<"="<<sin(x2)<<'\t';
		cout<<"cos"<<x1<<"="<<cos(x2)<<'\t'; 
		cout<<"tan"<<x1<<"="<<tan(x2)<<endl;
		x1+=10;
	}
	
	return 0;
} 
