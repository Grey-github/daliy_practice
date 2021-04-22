# include <stdio.h>

enum Weekday
{
	Monday = 4, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
	enum Weekday day = Sunday;
	printf("%d\n", day);
} 
