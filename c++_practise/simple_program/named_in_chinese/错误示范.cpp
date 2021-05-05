#include <stdio.h>

int main()
{
	double score;
	
	printf("请输入您的考试分数：");
	scanf("%lf, &score");//这行输入格式错误，导致输出一直为不及格。 
	
	if (score > 100)
        printf("做梦！\n");
	else if (score>=90 && score<=100) 
	    printf("优秀！\n");
	else if (score<90 && score>=80) 
	    printf("良好！\n");
	else if (score<80 && score>=60)
	    printf("及格\n");
	else if (score<60 && score>=0)
        printf("不及格");
	else 
	    printf("您输入的分数过低，请重新输入\n"); 
	        
	return 0;
}
