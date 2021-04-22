List MakeEmpty() // 创建并返回一个空的线性表
{
    List L = (List)malloc(sizeof(struct LNode));
    L->Last = -1;
    return L;
}

Position Find( List L, ElementType X ) // 返回线性表中X的位置。若找不到则返回ERROR
{
    Position i;
    for (i=0; i<=L->Last; i++)
    {
        if (L->Data[i] == X)
            return i;
    }
    return ERROR;
}

/*Ｐ和ｉ均为数据下标！！！！*/
/*
将X插入在P位置。若空间已满，则打印“FULL”并返回false；
如果参数P指向非法位置，则打印“ILLEGAL POSITION”并返回false；
*/
bool Insert( List L, ElementType X, Position P )
{
    if (L->Last == MAXSIZE - 1)
    {
        printf("FULL");
        return false;
    }
    
    if (P < 0 || P > L->Last + 1)
    {
        printf("ILLEGAL POSITION");
        return false;
    }
    
    Position i;
    for (i=L->Last; i>=P; i--) // 将P位置后元素全部后移一位
    {
        L->Data[i+1] = L->Data[i];
    }
    
    L->Data[i+1] = X;
    L->Last++;
    return true;
}

/*
将位置P的元素删除并返回true。
若参数P指向非法位置，则打印“POSITION P EMPTY”（其中P是参数值）并返回false。
*/
bool Delete( List L, Position P )
{
    if (P < 0 || P > L->Last)
    {
        printf("POSITION %d EMPTY", P);
        return false;
    }
    
    // 删除Ｐ位置的元素仅需将Ｐ位置后元素依次前移一位即可
    Position i;
    for (i=P; i<L->Last; i++)
    {
        L->Data[i] = L->Data[i+1];
    }
    L->Last--; // 减少一个
    return true;
}
