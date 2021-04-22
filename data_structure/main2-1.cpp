//main2-1.cpp 检验bo2-1.cpp的主程
#include "c1.h"		//c1.h中包含必要的头文件,以及OKd等宏定义,Status的定义
typedef int ElemType;
#include "c2-1.h"	//c2-1.h中定义了线性表顺序存储结构，以及部分宏定义
#include "my_bo2-1.cpp"//线性表的12个基本操作

Status comp(ElemType c1, ElemType c2)//数据元素判定函数(平方关系)
{
	if (c1 == c2*c2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void visit(ElemType &c)//ListTraverse()调用的函数(类型要一致)
{
	cout<<c<<" ";
}

void dbl(ElemType &c)//ListTraverse()调用的另一函数(元素值加倍)
{
	c *= 2;
}

int main()
{
	SqList L;
	ElemType e, e0;
	Status i;
	int j, k;

	i = InitList(L);//初始化线性表
	printf("初始化L后：L.elem = %u L.length = %d L.listsize = %d\n", L.elem, L.length, L.listsize);

	for (j=1; j<=5; j++)//插入元素
	{
		i = ListInsert(L, 1, j);
	}
	printf("在L的表头依次插入1～5后：*L.elem=");

	for (j=1; j<=5; j++)//输出元素
	{
		cout<<*(L.elem+j-1)<<" ";
	}
	cout<<endl;
	printf("L.elem=%u L.length=%d L.listsize=%d\n", L.elem, L.length, L.listsize);

	i = ListEmpty(L);
	printf("L是否空：i = %d(1:是 0:否)\n", i);
	i = ClearList(L);//清空线性表
	printf("清空L后：L.elem=%u L.length=%d L.lsitsize=%d\n", L.elem, L.length, L.listsize);
	i = ListEmpty(L);
    printf("L是否空：i = %d(1:是 0:否)\n", i);

	for (j=1; j<=10; j++)//插入元素
	{
		ListInsert(L, j, j);
	}
	printf("在L的表尾依次插入1~10之后：×L.elem=");

	for (j=1; j<=10; j++)//输出元素
	{
		cout<<*(L.elem+j-1)<<" ";
	}
	cout<<endl;
	printf("L.elem = %d L.length = %d L.listsize = %d\n", L.elem, L.length, L.listsize);

	ListInsert(L, 1, 0);//插入元素
	printf("在L的表头插入0后：×L.elem=");
	for (j=1; j<ListLength(L); j++)//输出元素
	{
		cout<<*(L.elem+j-1)<<" ";
	}
	cout<<endl;
	printf("L.elem=%u(有可能改变) L.length=%d(改变) L.listsize=%d(改变)\n", L.elem, L.length, L.listsize);

	GetElem(L, 5, e);//取某个元素并输出
	printf("第5个元素的值为：%d\n", e);

	for (j=3; j<=4; j++)//判断是否有元素为3、4的平方
	{
		k = LocateElem(L, j, comp);
		if (k)
		{
			printf("第%d个元素的值为%d的平方\n", k, j);
		}
		else
		{
			printf("没有值为%d的平方的元素\n", j);
		}
	}

	for (j=1; j<=2; j++)
	{
		GetElem(L, j, e0);
		i = PriorElem(L, e0, e);
		if (i == INFEASIBLE)
		{
			printf("元素%d无前驱\n", e0);
		}
		else
		{
			printf("元素%d的前驱为：%d\n", e0, e);
		}
	}

	for (j=ListLength(L)-1; j<=ListLength(L); j++)
	{
		GetElem(L, j, e0);
		i = NextElem(L, e0, e);
		if (i == INFEASIBLE)
		{
			printf("元素%d无后继\n", e0);
		}
		else
		{
			printf("元素%d的后继为：%d\n", e0, e);
		}
	}

	k = ListLength(L);
	for (j=k+1; j>=k; j--)
	{
		i = ListDelete(L, j, e);
		if (i == ERROR)
		{
			printf("删除第%d个数据失败\n", j);
		}
		else
		{
			printf("删除的元素值为：%d\n", e);
		}
	}

	printf("依次输出的元素: ");
	ListTraverse(L, visit);
	printf("L的元素值加倍后: ");
	ListTraverse(L, dbl);
	ListTraverse(L, visit);

	DestroyList(L);
	printf("销毁L后: L.elem=%u L.length=%d L.listsize=%d\n", L.elem, L.length, L.listsize);
	return 0;
}
