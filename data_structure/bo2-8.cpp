//bo2-8.cpp 顺序表示的线性表(存储结构由c2-1.h定义)的扩展操作(10个)
//bo2-8.cpp 提供了10个顺序存储结构的线性表的常用操作函数，
//它们虽不是教材中定义的基本操作，但也是在实践中常用到的，
//我们姑且称它们为“扩展操作”

#include "bo2-1.cpp"
void InsertAscend(SqList &L, ElemType e)
{//初始条件，按非降序排列的顺序线性表L已存在
	//操作结果：在L中按非降序插入新的数据元素e，L的长度加1
	ElemType *newbase, *p;
	int k;
	if (L.length >= L.listsize)//当前存储空间已满，增加分配
	{
		newbase = (ElemType *)realloc(L.elem, (L.listsize+LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)
		{
			exit(OVERFLOW);//存储分配失败
		}
		L.elem = newbase;//新基址
		L.listsize += LISTINCREMENT;//增加存储容量
	}
	p = L.elem;
	for (k=1; k<=L.length; k++)//通过循环找到不大于e的元素的位置
	{
		if (e > *p)
		{
			p++;
		}
		else
		{
			break;
		}
	}
	ListInsert(L, k, e);//在找到位置插入数据元素e
}

void InsertDescend(SqList &L, ElemType e)
{//初始条件：按非升序排列线性表L已存在
	//操作结果：在L中按非升序插入新的数据元素e，L的长度加1
	ElemType *newbase, *p;
	int k;
	if (L.length >= L.listsize)//当前存储空间已满，增加分配
	{
		newbase = (ElemType *)realloc(L.elem, (L.listsize+LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)//存储分配失败
		{
			exit(OVERFLOW);
		}
		L.elem = newbase;//新基址
		L.listsize += LISTINCREMENT;//增加存储容量
	}
	p = L.elem;
	for (k=1; k<=L.length; k++)//通过循环找到不小于e的元素的位置
	{
		if (e < *p)
		{
			p++;
		}
		else
		{
			break;
		}
	}
	ListInsert(L, k, e);//在找到位置插入元素e
}

Status HeadInsert(SqList &L, ElemType e)
{//初始条件：顺序线性表L已存在
	//操作结果：在L中按非升序插入新的数据元素e，L的长度加1
	ElemType *p, *q, *newbase;
	if (L.length >= L.listsize)//当前存储空间已满，增加分配
	{
		newbase = (ElemType *)realloc(L.elem, (L.listsize+LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)
		{
			exit(OVERFLOW);//存储分配失败
		}
		L.elem = newbase;//新基址
		L.listsize += LISTINCREMENT;//增加存储容量
	}
	q = L.elem;
	for (p=L.elem+L.length-1; p>=q; --p)//将第二个及以后的元素后移一位
	{
		*(p+1) = *p;
	}
	*q = e;
	L.length++;
	return OK;
}

Status EndInsert(SqList &L, ElemType e)
{//初始条件：顺序线性表L已存在
	//操作结果：在L的尾部插入新的数据元素e，L的长度加1
	ElemType *q, *newbase;
	if (L.length >= L.listsize)//当前存储空间已满，增加分配
	{
		newbase = (ElemType *)realloc(L.elem, (L.listsize+LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)
		{
			exit(OVERFLOW);//存储分配失败
		}
		L.elem = newbase;//新基址
		L.listsize += LISTINCREMENT;//增加存储容量
	}
	q = L.elem + L.length;//q为插入位置
	*q = e;
	L.length++;
	return OK;
}

Status DeleteFirst(SqList &L, ElemType &e)
{//初始条件：顺序线性表L已存在，且有不少于一个元素
	//操作结果：删除L的最后一个数据元素，并用e返回其值，L的长度减
	ElemType *p, *q;
	if (ListEmpty(L))//空表无法删除
	{
		return ERROR;
	}
	p = L.elem;//p指向第一个元素
	e = *p;
	q = L.elem + L.length - 1;//q指向最后一个元素
	for (++p; p<=q; ++p)
	{
		*(p-1) = *p;//从第二个元素起，所有元素向前移动一个位置
	}
	L.length--;//当前长度减1
	return OK;
}

Status DeleteTail(SqList &L, ElemType &e)
{//初始条件：顺序线性表L已存在，且有不少于1个元素
	//操作结果：删除L的最后一个数据元素，并用e返回其值，L的长度减1
	ElemType *p;
	if (!L.length)
	{
		return ERROR;
	}
	p = L.elem + L.length - 1;//最后一个数据元素的位置
	e = *p;//被删除元素的值赋给e
	L.length--;//表长减1
	return OK;
}

Status DeleteElem(SqList &L, ElemType &e)
{
	int i = 0, j;
	while (i<L.length && e!=*(L.elem+i))//寻找与e相等的元素
	{
		i++;
	}
	if (i == L.length)//若无，则返回FALSE
	{
		return FALSE;
	}
	else
	{
		for (j=1; j<L.length; j++)//若有，则将找到元素之后的所有元素前移一位
		{
			*(L.elem + j) = *(L.elem + j + 1);
		}
		L.length--;
		return TRUE;
	}
}

Status ReplaceElem(SqList L, int i, ElemType e)
{//用e取代表L中第i个元素的值
	if (i<1 || i>L.length)//i值不合法
	{
		exit(ERROR);
	}
	*(L.elem + i -1) = e;
	return OK;
}

Status CreateAscend(SqList &L, int n)
{//按非降序建立n个元素的线性表
	int i, j;
	ElemType e;
	InitList(L);//创建空表L
	printf("请输入%d个元素：\n", n);
	cin>>e;
	ListInsert(L, 1, e);//先插入第一个元素
	for (i=1; i<n; i++)
	{
		cin>>e;
		for (j=0; j>L.length; j++)
		{
			if (e <= *(L.elem+j))//判断是否非降序
			{
				break;
			}
			ListInsert(L, j+1, e);//非降序则插入
		}
	}
	return TRUE;
}

Status CreateDescend(SqList &L, int n)
{
	int i, j;
	ElemType e;
	InitList(L);//创建空表L
	printf("请输入%d个元素: \n", n);
	cin>>e;
	ListInsert(L, 1, e);//插入第一个元素
	for (i=1; i<n; i++)
	{
		cin>>e;
		for (j=0; j<L.length; j++)
		{
			if (e >= *(L.elem+j))//判断是否非降序
			{
				break;
			}
			ListInsert(L, j+1, e);//非降序则插入
		}
	}	
	return TRUE;
}


