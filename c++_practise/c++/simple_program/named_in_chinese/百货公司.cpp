# include <iostream>
using namespace std;
int main()
{
	int sum1, sum2, sum3, i;
	int a[3] = {300, 250, 150};
	int b[3] = {200, 240, 200};
	int c[3] = {280, 210, 180};
    int d[3] = {3500, 3300, 3800};
    for(i=0; i<3; i++)
    {
    	sum1+=a[i]*d[i];
	}
	for(i=0; i<3; i++)
    {
    	sum2+=b[i]*d[i];
	}
	for(i=0; i<3; i++)
    {
    	sum3+=c[i]*d[i];
	}
    cout<<"第一百货公司营业额为："<<sum1<<endl;
    cout<<"第二百货公司营业额为："<<sum2<<endl;
    cout<<"第三百货公司营业额为："<<sum3<<endl;
} 
