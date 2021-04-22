#include <stdio.h>
int main()
{
	int num;
	printf("Please input the number of student: ");
	scanf("%i", &num);
	
	int i;
	int score[num];
	printf("Please input the score of student one by one\n");
	for (i=0; i<num; i++)
	{
		printf("Student %i: ", i + 1);
		scanf("%i", score + i);
	}
	
	for (i=0; i<num; i++)
	{
		printf("The grade of student %i: ", i + 1);
		printf("%c\n",(score[i]>=90)?'A':((score[i]>=60)?'B':'C'));	
	}
	
	return 0;
} 
