# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
}

int main(void)
{
	struct Student st = {19, 98, 'F'}
	struct Student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'M';
	
	printf("%d %f %c\n", st.age, st,score, st,sex);
	printf("%d %f %c\n", st2.age, st2,score, st2,sex);
	
	return 0;
}
