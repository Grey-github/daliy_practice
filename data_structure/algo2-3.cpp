//algo2-3.cpp 实现算法2.7的程序
#include "c1.h"
typedef int ElemType;
#include "c2-1.h"
#include "my_bo2-1.cpp"
void MergeList(SqList La, SqList Lb, SqList &Lc)
{//已知顺序线性表La和Lb的元素按值非递减排列
	//归并La和Lb得到新的顺序线性表Lc，Lc的元素也按值非递减排列
	ElemType *pa, *pa_last;
	ElemType *pb, *pb_last;
	ElemType *pc;
	pa = La.elem;
	pb = Lb.elem;
	Lc.listsize = La.length + Lb.length;//不用InitList()创建空表Lc
	Lc.length = 0;//原书中没有考虑到Lc中元素的个数，编译可通过，但运行会出错
	pc = Lc.elem = (ElemType *)malloc(Lc.listsize*sizeof(ElemType));
	if (!Lc.elem)//存储分配失败
	{
		exit(OVERFLOW);
	}
	pa_last = La.elem + La.length - 1;
	pb_last = Lb.elem + Lb.length - 1;

	while (pa<=pa_last && pb<=pb_last)//表La和表Lb均非空
	{//归并
		if (*pa <= *pb)
		{
			*pc++ = *pa++;
			Lc.length++;//由于没有调用基本操作中的插入函数，要注意考虑到Lc元素个数的增加
		}
		else
		{
			*pc++ = *pb++;
			Lc.length++;
		}
	}
	while (pa <= pa_last)//表La非空且表Lb空
	{
		*pc++ = *pa++;//插入La的剩余的元素
		Lc.length++;
	}
	while (pb <= pb_last)//表Lb非空且表La空
	{
		*pc++ = *pb++;//插入Lb的剩余的元素
		Lc.length++;
	}
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
	for (j=1; j<=5; j++)//在表La中插入5个元素
	{
		ListInsert(La, j, j);
	}
	printf("La = ");
	ListTraverse(La, print);//遍历输出表La的元素

	InitList(Lb);//创建空表Lb
	for (j=1; j<=5; j++)
	{
		ListInsert(Lb, j, 2*j);//在表Lb中插入5个元素
	}
	printf("Lb = ");
	ListTraverse(Lb, print);//遍历输出表Lb的元素

	MergeList(La, Lb, Lc);
	printf("Lc = ");
	ListTraverse(Lc, print);//遍历输出表Lc的元素
	return 0;
}
