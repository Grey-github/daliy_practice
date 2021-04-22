Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3)
{//构造三元组T，依次置T的3个元素的初值为v1,v2,v3
	T = (ElemType *)malloc(3*sizeof(ElemType));//分配3个元素的存储空间
	if (!T)//分配存储空间失败
	{
		exit(OVERFLOW);
	}
	T[0] = v1;
	T[1] = v2;
	T[2] = v3;
	return OK;
}//InitTriplet

Status DestroyTriplet(Triplet &T)
{//销毁三元组T
	free(T);
	T = NULL;
	return OK;
}//DestroyTriplet

Status Get(Triplet T, int i, ElemType &e)
{//1<=i<=3,用e返回T的第i元的值
	if (i<1 || i>3)
	{
		return ERROR;
	}
	e = T[i -1];
	return OK;
}//Get

Status Put(Triplet &T, int i, ElemType e)
{//1<=i<=3,置T的第i元的值为e
	if (i<1 || i>3)
	{
		return ERROR;
	}
	T[i - 1] = e;
	return OK;
}//Put

Status IsAscending(Triplet T)
{//如果T的3个元素按升序排列，则返回1，否则返回0
	return (T[0]<=T[1]) && (T[1]<=T[2]);
}//IsAscending

Status IsDescending(Triplet T)
{//如果T的3个元素按降序排列，则返回1，否则返回0
	return (T[0]>=T[1]) && (T[1]>=T[2]);
}//IsDescending

Status Max(Triplet T, ElemType &e)
{//用e返回指向T的最大元素的值
	e = (T[0]>=T[1]) ? ((T[0]>=T[2]) ? T[0] : T[2])
				:((T[1]>=T[2]) ? T[1] : T[2]);
	return OK;
}//Max

Status Min(Triplet T, ElemType &e)
{//用e返回指向T的最小元素的值
	 e = (T[0]<=T[1]) ? ((T[0]<=T[2]) ? T[0] : T[2])
                                :((T[1]<=T[2]) ? T[1] : T[2]);
	return OK;
}//Min

