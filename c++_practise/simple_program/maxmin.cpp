# include <iostream>
using namespace std;
void max(int*ap, int*bp, int*cp)
{
	*ap = (*ap>*bp?*ap:*bp)>(*bp>*cp?*bp:*cp)?(*ap>*bp?*ap:*bp):(*bp>*cp?*bp:*cp);
}
void min(int*ap, int*bp, int*cp)
{
	int t;
	if (*ap<*bp)
	{
		t = *ap;
		*ap = *bp;
		*bp = t;	
	}
	if (*bp<*cp)
	{
		t = *bp;
		*bp = *cp;
		*cp = t;	
	}		 
}
int main()
{
	int a, b, c;
	cout<<"请输入三个整数的值"<<endl;
	cin>>a>>b>>c;
	min(&a, &b, &c);	max(&a, &b, &c);
	cout<<"最大值为："<<a<<endl;	cout<<"最小值为："<<c<<endl;
}
