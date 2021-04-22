# include <iostream>
# include <cmath>
using namespace std;

double ave(int n, double *s)
{
	int i;
	double sum=0;
	for (i=0; i<n; i++)
		sum+=s[i];
	return sum/n;
}		
double dev(int n, double *s)
{
	double sum=0;
	int	i;
	for (i=0; i<n; i++)
	{
		sum+=(s[i]-ave(n,s))*(s[i]-ave(n,s));
	}							
	return sqrt(sum/n);
}	

int main()
{
	int n, i;
	double s[n];
	cout<<"请输入学生的个数：";
	cin>>n;
	cout<<"请输入每个学生的分数: ";
	for (i=0; i<n; i++)
	{
		cin>>s[i]; 
	} 
	cout<<"班上的平均成绩为："<<ave(n,s)<<endl;
	cout<<"班上成绩的均方差为："<<dev(n,s)<<endl;
	return 0;
} 
