# include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	int xyz = x*100 + y*10 + z;
	int yzz = y*100 + z*10 + z;
	cout<<"满足条件的X、Y、Z的值分别为："<<endl;
	
	for(x=1;x<6;x++)
		for(y=0;y<4;y++)
			for(z=0;z<4;z++)
				if((x*100+y*10+z)+(y*100+z*10+z)==532) 
					cout<<x<<" "<<y<<" "<<z<<endl; 
					
	return 0;
} 
