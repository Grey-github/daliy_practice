/* L = 左边的起始位置，R = 右边的起始位置, RightEnd ＝右边终点位置*/
void Merge(ElementType A[], ElementType TmpA[],
           int L, int R, int RightEnd)
{
    int LeftEnd = R - 1; //左边终点位置，假设左右两列挨着
    Tmp = L; // 存放结果的数组的起始位置
    NumElements = RightEnd - L + 1;
    while (L<=LeftEnd && R<=RightEnd)
    {
        if (A[L] <= A[R])
            TmpA[Tmp++] = A[L++];
        else
            TmpA[Tmp++] = A[R++];
    }
    while (L <= LeftEnd) // 直接复制左边剩下的
        TmpA[Tmp++] = A[L++];
    while (R <= RightEnd) // 直接复制右边剩下的
        TmpA[Tmp++] = A[R++];
    for (i=0; i<NumElements; i++, RightEnd--) // 在Merge1()中此处复制省略
        A[RightEnd] = TmpA[RightEnd];
}

void MSort(ElementType A[], ElementType TmpA[],
           int L, int RightEnd)
{
    int Center;
    if (L < RightEnd)
    {
        center = (L + RightEnd) / 2;
        MSort(A, TmpA, L, Center);
        MSort(A, TmpA, Center+1, RightEnd);
        Merge(A, TmpA, L, Center+1, RightEnd);
    }
}

// 统一函数接口
void Merge_sort(ElementType A[], int N)
{
    ElementType* TmpA;
    TmpA = malloc(N * sizeof(ElementType));
    if (TmpA != NULL)
    {
        MSort(A, TmpA, 0, N-1);
        free(TmpA);
    }
    else ERROR("空间不足");
}


// 非递归算法
//完成一趟归并的函数
void Merge_pass(ElementType A[], ElementType TmpA[],
                int N, int length) // length = 当前有序子列的长度
{
    for (i = 0; i <= N-2*length; i += 2*length)
    {
        Merge1(A, TmpA, i, i+length, i+2*length-1);
    }
    if (i+length < N) // 归并最后两个子列
        Merge1(A, TmpA, i, i+length, N-1);
    else // 最后只剩１个子列
        for (j=1; j<N; j++) TmpA[j] = A[j];
}

void Merge_sort(ElementType A[], int N)
{
    int length = 1; // 初始化子序列长度
    ElementType* TmpA;
    TmpA = malloc(N * sizeof(ElementType));
    if (TmpA != NULL)
    {
        while (length < N)
        {
            Merge_pass(A, TmpA, N, length);
            length *= 2;
            Merge_pass(TmpA, A, N, length);
        }
        free(TmpA);
    }
    else Error("空间不足");
}
