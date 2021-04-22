#include <stdio.h>
//#define MaxSize <储存数据元素的最大个数>
typedef struct SNode *Stack;
struct SNode
{
	ElementType Data[MaxSize];
	int Top;
} 
int main()
{
	
} 

void Push(Stack PtrS, ElementType item)
{
	if (PtrS->Top == MaxSize - 1)
	{
		printf("堆栈满");
		return;
	}
	else
	{
		PtrS->Data[++(PtrS->Top)] = item;
		return;
	}
}

ElementType Pop(Stack PtrS)
{
	if (Ptrs->Top == -1)
	{
		printf("堆栈空");
		return ERROR;//ERROR是ElementType的特殊值，标志错误 
	}
	else
	{
		return (PtrS->Data[(PtrS->Top)--]);
	} 
}
