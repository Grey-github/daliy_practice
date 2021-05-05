# include <iostream>
using namespace std;

double tripleByValue(double count);
double tripleByReference(double &count2);
double tripleByPointer(double*p);

int main()
{
	double count;
	cout<<"请输入一个数"<<endl;
	cin>>count;
	cout<<tripleByValue(count)<<endl;
	tripleByReference(count);
	cout<<count<<endl;
	tripleByPointer(&count);
	cout<<count<<endl;
} 

double tripleByValue(double count)
{
	count = count*3;
	return count;
}

double tripleByReference(double &count2)
{
	count2 = 3*count2;
}

double tripleByPointer(double*p)
{
	*p = *p*3;
}
