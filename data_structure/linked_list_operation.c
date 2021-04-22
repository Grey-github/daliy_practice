Position Find( List L, ElementType X)
{
    Position i;
    for (i=L; i!=NULL; i=i->Next)
    {
        if (i->Data == X)
            return i;
    }
    return ERROR;
}

List Insert( List L, ElementType X, Position P )
{
    Position i;
    List Node = (List)malloc(sizeof(struct LNode));
    Node->Data = X;

    if (P == L) // 处理插入在表头位置
    {
        Node->Next = L;
        L = Node;
        return L;
    }
    else
    {
        for (i=L; i!=NULL; i=i->Next)
        {
            if (i->Next == P)
            {
                Node->Next = i->Next;
                i->Next = Node;
                return L;
            }
        }
    }

    printf("Wrong Position for Insertion\n");
    return ERROR;
}

List Delete( List L, Position P )
{
    Position i = L;
    if (i == P) // 处理删除表头元素
    {
        L = P->Next;
        free(P);
        return L;
    }
    for (i=L; i!=NULL; i=i->Next)
    {

        if (i->Next == P)
        {
            i->Next = P->Next;
            free(P);
            return L;
        }
    }

    printf("Wrong Position for Deletion\n");
    return ERROR;
}
