#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string first_name;
	cout<<"Enter the name of the person you want to write to"<<endl;
	cin>>first_name;
	cout<<"Dear, "<<first_name<<","<<endl;
	
	cout<<"How are you recently? I haven't seen you for long time"
		<<"I miss you very much"<<endl;
		
	string friend_name;	
	cout<<"Enter the name of the other friend"<<endl;
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?"<<endl;
	
	char friend_sex;
	cout<<"If your friend are male, "
		<<"please enter f"<<endl
		<<"If your friend are female"
		<<"please enter m"<<endl;
	cin>>friend_sex;
	if (friend_sex == 'f')
	{
		cout<<"If you seen "
			<<friend_name
			<<" please ask him to call me"
			<<endl;
	}
	if (friend_sex == 'm')
	{
		cout<<"If you seen "
			<<friend_name
			<<" please ask her to call me"
			<<endl;
	}
	
	int age;
	cout<<"Please enter the age of the receiver"<<endl;
	cin>>age;
	
	if ((age<=0) || (age>=110))
	{
		cout<<"Incorrect input.Please re-enter."<<endl;
	}
	cout<<"I hear you just had a birthday and you are "
		<<age<<" years old"<<endl;
	
	if (age < 12)
	{
		cout<<"Next year you will be "<<age + 1<<"."<<endl;
	}
	else if (age == 17)
	{
		cout<<"Next year you will be able to vote."<<endl;
	}
	else if (age > 70)
	{
		cout<<"I hope you are enjoying retirement"<<endl;
	}
	
	cout<<"Yours sincerely,"
		<<endl
		<<endl
		<<"Yuntianming";
}	


