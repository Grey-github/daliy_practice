//对bo2-1.cpp中顺序存储线性表的12个基本操作自己的尝试，故无注释，详见bo2-1.cpp
Status InitList(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!L.elem)
	{
		exit(OVERFLOW);
	}
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}

Status DestroyList(SqList &L)
{
	free(L.elem);
	L.elem  = NULL;
	L.length = 0;
	L.listsize = 0;
	return OK;
}

Status ClearList(SqList &L)
{
	L.length = 0;
	return OK;
}

Status ListEmpty(SqList L)
{
	if (L.length == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int ListLength(SqList L)
{
	return L.length;
}

Status GetElem(SqList L, int i, ElemType &e)
{
	if (i<1 || i>L.length)
	{
		exit(ERROR);
	}
	e = L.elem[i - 1];
	return OK;
}

Status LocateElem(SqList L, ElemType e, ElemType (* compare)(ElemType, ElemType))
{
	int i;
	for (i=1; i<=L.length; i++)
	{
		if ((*compare)(L.elem[i-1], e))
		{
			return i;
		}
	}
	if (i >= L.length)
	{
		return 0;
	}

}

Status PriorElem(SqList L, ElemType cur_e, ElemType &pre_e)
{
	int i = 2;
	while (cur_e!=L.elem[i-1] && i<=L.length+1)
	{
		i++;
	}

	if (i > L.length)
	{
		return INFEASIBLE;
	}
	else
	{
		pre_e = L.elem[i - 2];
		return OK;
	}
}

Status NextElem(SqList L, ElemType cur_e, ElemType &next_e)
{
	int i = 1;
	while (cur_e!=L.elem[i-1] && i<=L.length)
	{
		i++;
	}

	if (i == L.length)
	{
		return INFEASIBLE;
	}
	else
	{
		next_e = L.elem[i];
		return OK;
	}
}

Status ListInsert(SqList &L, int i, ElemType e)
{
	if (i<1 || i>L.length+1)
	{
		return ERROR;
	}
	if (L.length >= L.listsize)
	{
		ElemType *newbase = (ElemType *)realloc(L.elem, (L.listsize+LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)
		{
			exit(ERROR);
		}
		L.elem = newbase;
		L.listsize += LISTINCREMENT;
	}

	ElemType *p;
	ElemType *q = L.elem + i - 1;
	for (p=L.elem+L.length-1; p>=q; p--)
	{
		*(p + 1) = *p;
	}
	L.elem[i - 1] = e;
	L.length++;
	return OK;
}

Status ListDelete(SqList &L, int i, ElemType &e)
{
	if (i<1 || i>L.length)
	{
		return ERROR;
	}
	ElemType *p;
	ElemType *q = L.elem + L.length - 1;
	for (p=L.elem+i-1; p<q; p++)
	{
		*p = *(p+1);
	}
	L.length--;
	return OK;
}

Status ListTraverse(SqList L, void(*vi)(ElemType &))
{
	ElemType *p;
	int i;
	p = L.elem;
	for (i=1; i<=L.length; i++)
	{
		vi(*p++);
	}
	cout<<endl;
	return OK;
}
