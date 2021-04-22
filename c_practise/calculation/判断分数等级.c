#include <stdio.h>

int main()
{
	float score;
	
	printf("请输入您的考试分数");
	scanf("%f", &score);
	
	if (score > 100)
        printf("做梦\n"); 
	else if (score>=90 && score<=100) 
	    printf("优秀\n");
	else if (score>=80 && score<90)    
	    printf("良好\n");
	else if (score>=60 && score<80)
	    printf("及格\n");
	else if (score>=0 && score<60)
        printf("不及格\n");
	else 
	    printf("您输入的分数过低，请重新输入\n"); 
	        
	return 0;
}
