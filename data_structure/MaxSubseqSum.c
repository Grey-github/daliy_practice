// 算法１
int MaxSubseqSum1( int A[], int N )
{
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for (i=0; i<N; i++) // ｉ是子列左端位置
    {
        for (j=i; j<N; j++) // j是子列右端位置
        {
            ThisSum = 0; // ThisSum是从A[i]到A[j]的子列和
            for (k=i; k<=j; k++)
                ThisSum += A[K];
            if (ThisSum > MaxSum) // 如果刚得到的这个子列和更大
                MaxSum = ThisSum; // 则更新结果
        }
    }
}


// 算法２
int MaxSubseqSum2( int A[], int N )
{
    int ThisSum, MaxSum = 0;
    int i, j;
    for (i=0; i<N; i++) // ｉ是子列左端位置
    {
        ThisSum = 0; // ThisSum是A[i]到A[j]的子列和
        for (j=i; j<N; j++) // j是子列右端位置
        {
            ThisSum += A[j];
            // 对于相同的i,不同的j,只要在j-1次循环的基础上累加１项即可
            if (ThisSum > MaxSum) // 如果刚得到的这个子列和更大
                MaxSum = ThisSum; // 则更新结果
        }
    }
    return MaxSum;
}



// 算法３　分而治之

// 返回三个整数中的最大值
int Max(int A, int B, int C)
{
    return (A > B) ? (A > C ? A : C) : (B > C ? B : C);
}

// 分治法求List[left]到List[right]的最大子列和
int DivideAndConquer(int List[], int left, int right)
{
    int MaxLeftSum, MaxRightSum; // 存放左右子问题的解
    int MaxLeftBoardSum, MaxRightBoardSum; // 存放扩边界线的结果
    int LeftBoardSum, RightBoardSum;
    int center, i;

    // 递归终止条件, 子列只有一个数字
    if (left == right)
    {
        if (List[left] > 0)
            return List[left];
        else
            return 0;
    }

    // 分的过程
    center = (right + left) / 2; // 找到中分点
    MaxLeftSum = DivideAndConquer(List, left, center); // 递归求左子列和
    MaxRightSum = DivideAndConquer(List, center+1, right); // 递归求右子列和

    // 求跨分界线的最大子列和
    MaxLeftBoardSum = 0;
    LeftBoardSum = 0;
    for (i=center; i>=left; i--)
    {
        LeftBoardSum += List[i];
        if (LeftBoardSum > MaxLeftBoardSum)
            MaxRightBoardSum = RightBoardSum;
    } // 左边扫描结束

    MaxRightBorderSum = 0;
    RightBorderSum = 0;
    for (i=center+1; i<=right; i++)
    {
        RightBorderSum += List[i];
        if (RightBorderSum > MaxRightBorderSum)
            MaxRightBorderSum = RightBorderSum;
    } // 右边扫描结束

    // 返回“治”的结果
    return Max(MaxLeftSum, MaxRightSum, MaxRightBoardSum + MaxLeftBoardSum);
}

// 函数用于保持接口相同
int maxsequence3(int A[], int N)
{
    return DivideAndConquer(A, 0, N-1);
}



// 算法４　在线处理
int MaxSubseqSum4(int A[], int N)
{
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = 0;
    for (i=0; i<N; i++)
    {
        ThisSum += A[i]; // 向右累加
        if (ThisSum > MaxSum)
            MaxSum = ThisSum; // 发现更大和则更新当前结果
        else if (ThisSum < 0) // 如果当前子列和为负
            ThisSum = 0; // 则不可能使后面的部分和增大，放弃之
    }
    return MaxSum;
}
