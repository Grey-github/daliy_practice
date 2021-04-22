Position Find( ElemmentType X, BinTree BST )
{
    if (!BST)
        return NULL; // 查找失败
    if (X > BST->Data)
        return Find(X, BST->Right); // 在右子树中继续查找
    else if (X < BST->Data)
        return Find(X, BST->Left); // 在左子树中继续查找
    else // X == BST->Data
        return BST; // 查找成功，返回结点的找到结点的地址
}

Position IterFind( ElementType X, BinTree BST )
{
    while (BST)
    {
        if (X > BST->Data)
            BST = BST->Right; //向右子树中移动，继续查找
        else if (X < BST->Data)
            BST = BST->Left; // 向左子树中移动，继续查找
        else // X == BST->Data
            return BST; // 查找成功，返回结点的找到的地址
    }
    return NULL; // 查找失败
}

Position FindMin( BinTree BST )
{
    if (!BST)
        return NULL; // 空的二叉搜索树，返回NULL
    else if (!BST->Left)
        return BST; // 找到最左叶结点并返回
    else
        return FindMin(BST->Left); // 沿左分支继续查找
}

Position FindMax( BinTree BST )
{
    if (BST)
        while (BST->Right)  BST = BST->Right;
        // 沿右分支继续查找，直到最右叶结点
    return BST;
}

BinTree Insert( ElementType X, BinTree BST )
{
    if (!BST)
    {
        // 若原树为空，生成并返回一个结点的二叉搜索树
        BST = malloc(sizeof(struct TreeNode));
        BST->Data = X;
        BST->Left = BST->Right = NULL;
    }
    else // 开始找要插入元素的位置
    {
        if (X < BST->Data) // 递归插入左子树
            BST->Left = Insert(X, BST->Left);
        else if (X > BST->Data) // 递归插入右子树
            BST->Right = Insert(X, BST->Right);
        // else X 已经存在，什么都不做
    }
    return BST;
}

BinTree Delete( ElementType X, BinTree BST )
{
    Position Tmp;
    if (!BST)
        printf("Not Found\n");
    else if (X < BST->Data)
        BST->Left = Delete(X, BST->Left); // 左子树递归删除
    else if (X > BST->Data)
        BST->Right = Delete(X, BST->Right); // 右子树递归删除
    else // 找到要删除的结点
    {
        if (BST->Left && BST->Right) // 被删除结点有左右两个子结点
        {
            // 在右子树中找最小的元素填充删除结点
            Tm = FindMin(BST->Right);
            BST->Data = Tmp->Data;
            // 在删除结点的右子树中删除最小元素
            BST->Right = Delete(BST->Data, BST->Right);
        }
        else // 被删除结点有一个或无子结点
        {
            Tmp = BST;
            if (!BST->Left) // 有右孩子或无子结点
                BST = BST->Right;
            else if (!BST->Right) // 有左孩子或无子结点
                BST = BST->Left;
            free(Tmp);
        }
    }
    return BST;
}
