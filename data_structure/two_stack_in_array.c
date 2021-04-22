Stack CreateStack( int MaxSize )
{
    Stack S = (Stack)malloc(sizeof(struct SNode));
    S->MaxSize = MaxSize;
    S->Data = (ElementType*)malloc(MaxSize*sizeof(ElementType));
    S->Top1 = -1;
    S->Top2 = MaxSize;
    return S;
}

bool Push( Stack S, ElementType X, int Tag )
{
    if (S->Top1+1 == S->Top2)
    {
        printf("Stack Full\n");
        return false;
    }

    if (Tag == 1)
    {
        S->Data[++(S->Top1)] = X;
        return true;
    }

    if (Tag == 2)
    {
        S->Data[--(S->Top2)] = X;
        return true;
    }

}

ElementType Pop( Stack S, int Tag)
{
    if (Tag == 1)
    {
        if (S->Top1 == -1)
        {
            printf("Stack %d Empty\n", Tag);
            return ERROR;
        }

        return S->Data[(S->Top1)--];
    }

    if (Tag == 2)
    {
        if (S->Top2 == S->MaxSize)
        {
            printf("Stack %d Empty\n", Tag);
            return ERROR;
        }
        
        return S->Data[(S->Top2)++];
    }

}
