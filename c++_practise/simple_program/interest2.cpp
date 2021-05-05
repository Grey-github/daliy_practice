#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double money,years,rate,sum;
    cout<<"请输入本金、存款年限和利息，用空格隔开"<<endl; 
	cin>>money>>years>>rate;
	while(money>0)
	{
	    sum=money*pow((1+rate),years);
	    cout<<"本息共";
        cout<<sum<<endl;
        cout<<"请输入本金、存款年限和利息，用空格隔开"<<endl;
        cin>>money>>years>>rate;
    }
	return 0;
}	
