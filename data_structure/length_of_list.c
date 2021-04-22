int Length( List L )
{
    int len = 0;
    List i;
    for (i=L; i!=NULL; i=i->Next)
    {
        len++;
    }
    return len;
}
