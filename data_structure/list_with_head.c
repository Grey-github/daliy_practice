List MakeEmpty()
{
    List L;
    L = (List)malloc(sizeof(struct LNode));
    L->Next = NULL;
    return L;
}

Position Find( List L, ElementType X )
{
    Position i;
    for (i=L; i!=NULL; i=i->Next)
    {
        if (i->Data == X)
            return i;
    }
    return ERROR;
}

bool Insert( List L, ElementType X, Positon P )
{
    List node = (List)malloc(sizeof(struct LNode));
    node->Data = X;
    List i;

    for (i=L; i!=NULL; i=i->Next)
    {
        if (i->Next == P)
        {
            node->Next = P;
            i->Next = node;
            return true;
        }
    }

    printf("Wrong Position for Insertion\n");
    return false;
}

bool Delete( List L, Position P )
{
    List i;
    for (i=L; i!=NULL; i=i->Next)
    {
        if (i->Next == P)
        {
            i->Next = P->Next;
            free(P);
            return true;
        }
    }

    printf("Wrong Position for Deletion\n");
    return false;
}
