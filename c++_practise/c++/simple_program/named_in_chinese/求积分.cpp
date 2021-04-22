#include <iostream>
#include <cmath>
using namespace std;
double f(double x);
double g(double x);
double h(double x);
int main()
{
	int i;
	double T1, T2, T3;
	double n = 1000;
	double pi = 3.14159;
	double h1 = 1/n;
	double h2 = 1/n;
	double h3 = pi/(2*n);
	for (i=1; i<n; i++)
		T1+=h1*f(i*h1);
	T1+=h1*(f(0) + f(1))/2; 
	
	for (i=1; i<n; i++)
		T2+=h2*f(1+i*h2);
	T2+=h2*(g(1) + g(2))/2;
	
	for (i=1; i<n; i++)
		T3+=h3*f(i*h3);
	T3+=h3*(h(0) + h(pi/2))/2;
	cout<<"三个积分的值分别为："<<endl;
	cout<<T1<<endl;
	cout<<T2<<endl;
	cout<<T3<<endl; 
}
double f(double x)
{
	return 4/(1 + x*x);
} 
double g(double x)
{
	return pow(1 + x*x, 1/2);
}
double h(double x)
{
	return sin(x);
}

