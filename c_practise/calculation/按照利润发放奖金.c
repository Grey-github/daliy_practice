# include <stdio.h>

int main()
{
    double i;
	double bonus;
	
	printf("请输入利润i的值 单位(万元)\n\n"); 
	
	scanf("%lf", &i);
	
	if (i<=10)
	    bonus = i*10/100;
	else if (i>10&&i<20)
	    bonus = 10*10/100 + (i - 10)*7.5/100;
	else if (i>=20&&i<40)
	    bonus = 10*10/100 + (20 - 10)*7.5/100 + (i - 20)*5/100;
	else if (i>=40&&i<60)
		bonus = 10*10/100 + (20 - 10)*7.5/100 + (40 - 20)*5/100 + (i - 40)*3/100;
	else if (i>=60&&i<100)
		bonus = 10*10/100 + (20 - 10)*7.5/100 + (40 - 20)*5/100 + (60 - 40)*3/100 + (i - 60)*1.5/100;
	else 
		bonus = 10*10/100 + (20 - 10)*7.5/100 + (40 - 20)*5/100 + (60 - 40)*3/100 + (100 - 60)*1.5/100 + (i - 100)*1/100;
	
	printf("\n您的奖金bonus=%lf万元\n", bonus);
	
	return 0;
} 
/*网站上的标准答案，相比起来避免了单行过长的代码 
#include<stdio.h>
int main()
{
    double i;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    printf("你的净利润是：\n");
    scanf("%lf",&i);
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(i<=100000) {
        bonus=i*0.1;
    } else if(i<=200000) {
        bonus=bonus1+(i-100000)*0.075;
    } else if(i<=400000) {
        bonus=bonus2+(i-200000)*0.05;
    } else if(i<=600000) {
        bonus=bonus4+(i-400000)*0.03;
    } else if(i<=1000000) {
        bonus=bonus6+(i-600000)*0.015;
    } else if(i>1000000) {
        bonus=bonus10+(i-1000000)*0.01;
    }
    printf("提成为：bonus=%lf",bonus);
 
    printf("\n");
}
*/
