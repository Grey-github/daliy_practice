void purge(SqList &La, SqList Lb)
{
	//已知线性表Lb中包含非纯集合B中所有元素
	//试构造线性表La，使La中只含Lb中所有值均不相同的元素
	InitList(La);//设置空的线性表La
	int La_len = ListLength(La);
	int Lb_len = ListLength(Lb);//求线性表的长度
	int i;
	ElemType e;

	for (i=1; i<=Lb_len; i++)
	{
		GetElem(Lb, i, e);//从线性表Lb中取第i个元素
		if (!LocateElem(La, e, equal()))
		{
			++La_len;
			ListInsert(La, La_len, e);//元素e插入线性表La
		}
	}
}

void new_purge(SqList &La, SqList Lb)
{//新算法需要将Lb中所有元素先进行排序
	InitList(La);
	int La_len = ListLength(La);
	int Lb_len = ListLength(Lb);
	int i;
	ElemType e;
	ElemType en;

	for (i=1; i<=Lb_len; i++)
	{
		GetElem(Lb, i, e);
		//当La为空表或La中不存在相同元素时，则插入
		if (ListEmpty(La) || !equal(en, e))
		{
			ListInsert(La, ++La_len, e);
			en = e;
		}
	}
}
