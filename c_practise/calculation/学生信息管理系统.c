# include <stdio.h>
# include <malloc.h>

struct Student
{
	float score;
	int age;
	char name[100];
};

int main()
{
	int i,j,a,b;
	struct Student t;
	int len;
	struct Student * pArr;
	
	printf("请输入学生的个数\n");
	scanf("%d", &len);
	pArr = (struct Student *)malloc(len*(sizeof (struct Student)));
	
	
	for (i=0; i<len; i++)
	{	
		printf("请输入第%d个学生的信息\n", i+1);
		printf("name = ");
		scanf("%s", pArr[i].name);
		
		printf("age = ");
		scanf("%d", &pArr[i].age);
		
		printf("score = ");
		scanf("%f", &pArr[i].score);
	}
	
	for (a=0; a<len-1; a++)
	{
		for (b=0; b<len-1-a; b++)
		{
			if (pArr[b].score>pArr[b+1].score)
			{
				t = pArr[b];
				pArr[b] = pArr[b+1];
				pArr[b+1] = t; 
			}
		}
	}
	
	printf("\n学生的信息是\n");
	for (j=0; j<len; j++)
	{
		printf("第%d个学生的信息是\n", j+1);
		printf("name = %s\n", pArr[j].name);
		printf("age = %d\n", pArr[j].age);
		printf("score = %f\n", pArr[j].score);
	}
	return 0;
} 
