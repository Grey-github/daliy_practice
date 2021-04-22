// 最大堆的创建
typedef struct HeapStruct* MaxHeap;
struct HeapStruct
{
    ElementType* Elements; // 存储堆元素的数组
    int Size; // 堆当前元素个数
    int Capacity; // 堆的最大容量
};

MaxHeap Create(int MaxSize)
{
    /*创建容量为MaxSize的空的最大堆*/
    MaxHeap H = malloc(sizeof(struct HeapStruct));
    H->Elements = malloc((MaxSize+1) * sizeof(ElementType));
    H->Size = 0;
    H->Capacity = MaxSize;
    H->Elements[0] = MaxData; // 定义“哨兵”为大于堆中所有可能元素的值，便于以后更快操作
    return H;
}

// 将新增结点插入到从其父结点到根结点的有序序列中
void Insert(MaxHeap H, ElementType item)
{
    // 将元素item插入最大堆H,其中H->Elements[0]已经定义为哨兵
    int i;
    if (IsFull(H))
    {
        printf("最大堆已满");
        return;
    }
    i = ++H->Size; // i指向插入后堆中最后一个元素的位置
    for ( ; H->Elements[i/2] < item; i/=2)
        H->Elements[i] = H->Elements[i/2]; // 向下过滤结点
    H->Elements[i] = item; // 将item插入
}

