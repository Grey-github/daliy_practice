void InorderTraversal( BinTree BT )
{
    if (BT == NULL)
        return;
    InorderTraversal(BT->Left);
    printf(" %c", BT->Data);
    InorderTraversal(BT->Right);
}

void PreorderTraversal( BinTree BT )
{
    if (BT == NULL)
        return;
    printf(" %c", BT->Data);
    PreorderTraversal(BT->Left);
    PreorderTraversal(BT->Right);
}

void PostorderTraversal( BinTree BT )
{
    if (BT == NULL)
        return;
    PostorderTraversal(BT->Left);
    PostorderTraversal(BT->Right);
    printf(" %c", BT->Data);
}

void LevelorderTraversal( BinTree BT )
{
    if (BT == NULL)
        return;
    BinTree queue[20];
    int front=0, rear=0;
    queue[rear++] = BT;

    while (front != rear)
    {
        printf(" %c", BT->Data);
        front++;

        if (BT->Left != NULL)
            queue[rear++] = BT->Left;
        if (BT->Right != NULL)
            queue[rear++] = BT->Left;
    }
}
