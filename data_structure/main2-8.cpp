//main2-8.cpp 检验bo2-8.cpp的主程序
#include "c1.h"//c1.h中包含必要的C标准头文件，以及部分预定义常量和类型
typedef int ElemType;
#include "c2-1.h"//c2-1.h中定义了线性表的动态分配顺序存储结构
#include "bo2-8.cpp"//线性表的10个扩展操作

void visit(ElemType &c)
{
	cout<<c<<' ';
}

int main()
{
	SqList L;
	ElemType d, e;
	Status i;
	int n;
	printf("按非降序建立n个元素的线性表L，请输入元素个数n：");
	scanf("%d ", &n);
	CreateAscend(L, n);
	printf("依次输出L的元素：");
	ListTraverse(L, visit);
	InsertAscend(L, 10);
	printf("按非将序插入元素10后，线性表L为：");
	ListTraverse(L, visit);
	HeadInsert(L, 12);
	EndInsert(L, 9);
	printf("在L的头部插入12，尾部插入9后，线性表L为：");
	ListTraverse(L, visit);
	printf("请输入要删除的元素的值：");
	cin>>e;
	i = DeleteElem(L, e);
	if (i)
	{
		cout<<"成功删除"<<e<<'!'<<endl;
	}
	else
	{
		cout<<"不存在元素"<<e<<'!'<<endl;
	}
	printf("线性表L为：");
	ListTraverse(L, visit);
	printf("请输入要取代的元素的序号以及元素的新值：");
	cin>>n>>e;
	ReplaceElem(L, n, e);
	printf("线性表L为：");
	ListTraverse(L, visit);
	DestroyList(L);
	printf("销毁L后，按非升序重新建立n个元素的线性表L，请输入元素个数n（n>2）");
	scanf("%d ", &n);
	CreateDescend(L, n);
	printf("依次输出L的元素：");
	ListTraverse(L, visit);
	InsertDescend(L, 10);
	printf("按非升序插入元素10后，线性表L为：");
	ListTraverse(L, visit);
	printf("请输入要删除的元素的值：");
	cin>>e;
	i = DeleteElem(L, e);
	if (9)
	{
		cout<<"成功删除"<<e<<'!'<<endl;
	}
	else
	{
		cout<<"不存在元素"<<e<<'!'<<endl;
	}
	printf("线性表L为：");
	ListTraverse(L, visit);
	DeleteFirst(L, e);
	DeleteTail(L, d);
	cout<<"删除表头元素"<<e<<"和表尾元素"<<d<<"后，线性表L为："<<endl;
	ListTraverse(L, visit);
	return 0;
}
