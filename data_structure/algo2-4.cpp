//algo2-4.cpp 修改算法2.7的第一个循环语句中的条件语句改为开关语句，
//且当*pa = *pb时，只有将两者之一插入Lc，此操作的结果和算法2.1相同
#include "c1.h"
typedef int ElemType;
#include "c2-1.h"
#include "my_bo2-1.cpp"

int comp(ElemType c1, ElemType c2)
{
	int i;
	if (c1 < c2)
	{
		i = 1;
	}
	else if (c1 == c2)
	{
		i = 0;
	}
	else
	{
		i = -1;
	}
	return i;
}

void MergeList(SqList La, SqList Lb, SqList &Lc)
{//另一种合并线性表的方法(根据算法2.7下的要求修改算法2.7)
	ElemType *pa, *pa_last;
	ElemType *pb, *pb_last;
	ElemType *pc;
	pa = La.elem;
	pb = Lb.elem;
	Lc.listsize = La.length + Lb.length;//此句与算法2.7不同
	pc = Lc.elem = (ElemType *)malloc(Lc.listsize*sizeof(ElemType));
	if (!Lc.elem)
	{
		exit(OVERFLOW);
	}
	pa_last = La.elem + La.length - 1;
	pb_last = Lb.elem + Lb.length - 1;
	while (pa<=pa_last && pb<=pb_last)//表La和表Lb均非空
	{
		switch(comp(*pa, *pb))//此句与算法2.7不同
		{
			case 0: 
				pb++;
				break;
			case 1:
				*pc++ = *pa++;
				break;
			case -1:
				*pc++ = *pb++;
				break;
			default:
				printf("What's wrong with you?");
				break;
		}
	}
	while (pa <= pa_last)//表La非空且表Lb空
	{
		*pc++ = *pa++;
	}
	while (pb <= pb_last)//表Lb非空且表La空
	{
		*pc++ = *pb++;
	}
	Lc.length = pc - Lc.elem;//加此句
}

void print(ElemType &c)
{
	printf("%d ", c);
}

int main()
{
	SqList La, Lb, Lc;
	int j;

	InitList(La);//创建空表La
	for (j=1; j<=5; j++)//在表La中依次插入5个元素
	{
		ListInsert(La, j, j);
	}
	printf("La = ");
	ListTraverse(La, print);//遍历输出表La中的元素

	InitList(Lb);//创建空表Lb
	for (j=1; j<=5; j++)//在表Lb中依次插入5个元素
	{
		ListInsert(Lb, j, 2*j);
	}
	printf("Lb = ");
	ListTraverse(Lb, print);//遍历输出表Lb中的元素

	MergeList(La, Lb, Lc);//将La，Lb中互不相同的元素按序插入Lc中
	printf("Lc = ");
	ListTraverse(Lc, print);//遍历输出表Lc中的元素
	return 0;
}
