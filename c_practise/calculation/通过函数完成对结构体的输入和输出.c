# include <stdio.h>
# include <string.h> 
struct Student
{
	int age;
	char sex;
	char name[100];
};

void InputStudent();
void OutputStudent();


int main(void)
{
	
	struct Student st;
	
	InputStudent(&st);
	OutputStudent(st);
	return 0;	
} 

void OutputStudent(struct Student * pst)
{
	printf("%d %c %s\n",pst->age, pst->sex, pst->name);
}

void InputStudent(struct Student * pstu)
{
	(*pstu).age = 10;
	strcpy(pstu->name, "ÕÅÈý");
	pstu->sex = 'F';
}
