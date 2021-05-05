# include <iostream>
using namespace std;
typedef struct complex_num
{
	double real;
	double image;
}NUM, *PNUM;
NUM add(PNUM pnum1,PNUM pnum2)
{
	NUM result;
	result.real = pnum1->real + pnum2->real;
	result.image = pnum1->image + pnum2->image;
	return result; 
}
NUM subtract(PNUM pnum1,PNUM pnum2)
{
	NUM result;
	result.real = pnum1->real - pnum2->real;
	result.image = pnum1->image - pnum2->image;
	return result; 
}
NUM multiply(PNUM pnum1,PNUM pnum2)
{
	NUM result;
	result.real = pnum1->real*pnum2->real - pnum1->image*pnum2->image;
	result.image = pnum1->real*pnum2->image + pnum1->image*pnum2->real;
	return result;
}
NUM division(PNUM pnum1,PNUM pnum2)
{
	NUM result;
	result.real = (pnum1->real*pnum2->real +  pnum1->image*pnum2->image)
	    /(pnum2->real*pnum2->real + pnum2->image*pnum2->image);
	result.image = (pnum1->image*pnum2->real - pnum1->real*pnum2->image) 
	    /(pnum2->real*pnum2->real + pnum2->image*pnum2->image);
} 
int main()
{
	int i;
	NUM num1, num2, result;
	cout<<"请输入第一个复数的实部：";
	cin>>num1.real;
	cout<<"请输入第一个复数的虚部：";
	cin>>num1.image;
	cout<<"请输入第二个复数的实部：";
	cin>>num2.real;
	cout<<"请输入第二个复数的虚部：";
	cin>>num2.image;
	cout<<"1.加法"<<"  "<<"2.减法"<<"  "<<"3.乘法"<<"  "<<"4.除法"<<endl;
	cout<<"请输入你要进行的运算的序号"<<endl;
	cin>>i;
	switch(i)
	{
		case 1:
			result = add(&num1,&num2);
			cout<<"两复数相加的结果是："<<result.real<<" + "<<result.image<<"i"<<endl;
			break;
		case 2: 
		    result = subtract(&num1,&num2);
			cout<<"两复数相减的结果是："<<result.real<<" + "<<result.image<<"i"<<endl;
			break;
		case 3:
			result = multiply(&num1,&num2);
			cout<<"两复数相乘的结果是："<<result.real<<" + "<<result.image<<"i"<<endl;
			break;
		case 4:
			result = division(&num1,&num2);
			cout<<"两复数相除的结果是："<<result.real<<" + "<<result.image<<"i"<<endl;
			break;
		 
	}
} 
