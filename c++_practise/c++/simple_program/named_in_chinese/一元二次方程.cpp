# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	float delta;
	float x1, x2;
	delta = b*b - 4*a*c;
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout<<x1<<x2<<endl; 
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2*a);
		x2 = x1;
		cout<<"x1 = x2 = "<<x1<<endl;
	}
	else
	{
	    cout<<"нч╫Б"<<endl;
    }
    return 0;
}
