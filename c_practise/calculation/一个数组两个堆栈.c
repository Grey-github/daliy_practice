/*【例】 请用一个数组实现两个堆栈，要求最大地利用数组空间，
使数组只要有空间入栈就可以成功。 
【分析】可行的方法是使这两个栈分别从数组的两头开始向中间生长；当
两个栈的栈顶指针相遇时，表示两个栈都满了*/
#include <stdio.h>
#define MaxSize <储存数据元素的最大个数>
struct DStack
{
	ElementType Data[MaxSize];
	int Top1;/*栈顶1的栈顶指针*/
	int Top2;/*栈顶2的栈顶指针*/ 
};
struct DStack S;
 
int main()
{
	return 0;
} 
