ElementType FindKth( List L, int X)
{
    int i = 1;
    ElementType data;
    List ptr;
    for (ptr=L; ptr!=NULL; ptr=ptr->Next)
    {
        if (i == X)
            return ptr->Data;
	i++;
    }
    return ERROR;
}
