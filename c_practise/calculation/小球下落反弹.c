#include <stdio.h>

int main()
{

	double high = 100;
	double path;
	int i;
	int flag = 0;//0表示下落，1表示反弹 
						//第一次尝试，错误的算法 
	for (i=0; i<20; i++)//此方法的错误之处在于：
						//下落和反弹的总次数为10，而不是下落或反弹10次
	{					//当下落和反弹的总次数为20时刚好正确 
		if (flag == 0)
		{	
			path += high; 
			high = high/2;
			flag = 1; 
		}	
		else
		{
			path += high; 
			flag = 0;
		}
	}
											//需控制输出小数的位数来保证结果精度 
											// 否则输出结果会省略小数后若干位 
	printf("总路程：%.10lf\n", path);		// printf("%.5f\n",a);          输出3.14159 
    printf("最后一次反弹：%.10lf\n", high);	//printf("%.2f\n",a);    输出3.14  

	return 0; 
	
	/*答案方法 
	#include<stdio.h>
	int main()
	{
	    float h,s;
	    h=s=100;
	    h=h/2; //第一次反弹高度
	    for(int i=2;i<=10;i++)
	    {
	        s=s+2*h;
	        h=h/2;
	    }
	    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
	    return 0;
	    //输出结果为： 
	}	//第10次落地时，共经过299.609375米，第10次反弹高0.097656米
	*/
}
