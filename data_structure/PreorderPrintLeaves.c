void PreorderPrintLeaves(BinTree BT)
{
    if (BT == NULL) // 处理空树
        return NULL;

    // 打印叶结点
    if (BT->Left==NULL && BT->Right==NULL)
    {
        printf(" %c", BT->Data);
        return;
    }
    PreorderPrintLeaves(BT->Left);
    PreorderPrintLeaves(BT->Right);
}
