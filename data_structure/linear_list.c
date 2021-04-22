#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 //存储空间初始分配量
typedef int Status; // Status是函数的类型，其值是函数结果状态代码，如OK等 
typedef int ElemType; // ElemType类型根据实际情况而定，这里假设为int

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
} SqList;

// 初始条件：顺序线性表Ｌ已存在，1<= i <= ListLength(L)
// 操作结果：用ｅ返回Ｌ中第ｉ个数据元素的值
Status GetElem(SqList L, int i, ElemType *e)
{
    if (L.length==0 || i<1 || i>L.length)
        return ERROR;
    *e = L.data[i-1];
    return OK;
}

// 初始条件：顺序线性表Ｌ已存在，1<= i <= ListLength(L)
// 操作结果：在Ｌ中第ｉ个位置之前插入新的数据元素ｅ，Ｌ的长度加１
Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;
    if (L->length==MAXSIZE) // 顺序线性表已经满
        return ERROR;
    if (i<1 || i>L->length+1) // 当ｉ不在范围内时
        return ERROR;
    if (i<=L->length) // 若插入数据位置不在表尾
    {
        for (k=L->length-1; k>=i-1; k--) // 将要插入位置后数据元素向后移动一位
            L->data[k+1] = L->data[k];
    }
    L->data[i-1] = e; // 将新元素插入
    L->length++;
    return OK;
}

// 初始条件：顺序线性表Ｌ已存在，1<= i <= ListLength(L)
// 操作结果：删除Ｌ的第ｉ个数据元素，并用ｅ返回其值，Ｌ的长度减一
Status ListDelete(SqList *L, int i, ElemType *e)
{
    int k;
    if (L->length == 0) // 线性表为空
        return 0;
    if (i<1 || i>L->length) // 删除位置不正确
        return ERROR;
    *e = L->data[i-1];
    if (i<L->length) // 如果删除不是最后位置
    {
        for (k=i; k<L->length; k++) // 将删除位置后继元素前移
            L->data[k-1] = L->data[k];
    }
    L->length--;
    return OK;
}

// 线性表的单链表存储结构
typedef struct Node
{
    ElemType data;
    struct Node* next;
} Node;
typedef struct Node* LinkList; //  定义LInklList

// 单链表的读取
// 初始条件：顺序线性表Ｌ已存在，1 <= i <=ListLength(L)
// 操作结果：用ｅ返回Ｌ中第ｉ个数据元素的值
Status GetElem(LinkList L, int i, ElemType* e)
{
    int j; 
    LinkList p; // 声明一结点
    p = L->next; // 让ｐ指向链表Ｌ的第一个结点
    j = 1; // j为计数器

    while (p!=NULL && j<i) // p不为空或者计数器ｊ还没有等于ｉ时，循环继续
    {
        p = p->next; // 让ｐ指向下一个结点
        ++j;
    }
    
    if (p==NULL || j>i)
        return ERROR; // 第ｉ个元素不存在
    *e = p->data;
    return OK;
}

// 初始条件：顺序线性表Ｌ已存在，1 <= i <= ListLength(L)
// 操作结果: 在Ｌ中第ｉ个位置之前插入新的数据元素ｅ，Ｌ的长度加１
Status ListInsert(LinkList *L, int i, ElemType e)
{
    int j;
    LinkList p, s;
    p = *L;
    j = 1;
    while (p!=NULL && j<i) // 寻找第ｉ个结点
    {
        p = p->next;
        ++j;
    }
    if (p==NULL || j>i) // 第ｉ个元素不存在
        return ERROR; 
    s = (LinkList)malloc(sizeof(Node)); // 生成新结点（Ｃ标准函数） 
    s->data = e;
    s->next = p->next; // 将ｐ的后继结点赋值给ｓ的后继
    p->next = s; // 将ｓ赋值给ｐ的后继
    return OK;
}

// 初始条件：顺序线性表Ｌ已存在，1 <= i <= ListLength(L)
// 操作结果: 删除Ｌ的第ｉ个数据元素，并用ｅ返回其值，Ｌ的长度减一
Status ListDelete(LinkList* L, int i, ElemType* e)
{
    int j;
    LinkList p, q;
    p = *L;
    j = 1;
    while (p->next!=NULL && j<i) // 遍历寻找第ｉ个元素
    {
        p = p->next;
        ++j;
    }
    if (p->next==NULL || j>i)
        return ERROR;   // 第ｉ个元素不存在
    q = p->next;
    p->next = q->next;  // 将ｑ的后继赋值给ｐ的后继
    *e = q->data;   //将ｑ结点中的数据给ｅ
    free(q);    //让系统回收此结点，释放内存
    return OK;
}

// 随机产生ｎ个元素的值，建立带表头结点的单链线性表Ｌ（头插法）
void CreateListHead(LinkList* L, int n)
{
    LinkList p;
    int i;
    srand(time(0)); // 初始化随机数种子
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;  // 先建立一个带头结点的单链表
    for (i=0; i<n; i++)
    {
        p = (LinkList)malloc(sizeof(Node)); // 生成新结点
        p->data = rand()%100 + 1;   // 随机生成１００以内的数字
        p->next = (*L)->next;
        (*L)->next = p; //插入到表头
    }
}

// 随机产生ｎ个元素的值，建立带表头结点的单链线性表Ｌ（尾插法）
void CreateListTail(LinkList* L, int n)
{
    LinkList p, r;
    int i;
    srand(time(0)); // 初始化随机数种子
    *L = (LinkList)malloc(sizeof(Node)); // 为整个线性表
    r = *L; // ｒ为指向尾部的结点
    for (i=0; i<n; i++)
    {
        p = (Node*)malloc(sizeof(Node)); // 生成新结点
        p->data = rand()%100 + 1; //随机生成１００以内的数字
        r->next = p; //将表尾终端结点的指针指向新结点
        r = p; // 将当前的新结点定义为表尾终端结点
    }
    r->next = NULL; // 表示当前链表结束
}

// 初始条件：顺序线性表Ｌ已存在，操作结果：将Ｌ重置为空表
Status ClearList(LinkList* L)
{
    LinkList p, q;
    p = (*L)->next; // ｐ指向第一个结点
    while (p != NULL) // 没到表尾
    {
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = NULL; //头结点指针域为空
    return OK;
}

/* // 线性表的静态链表存储结构
#define MAXSIZE 1000 // 假设链表的最大长度是１０００
typedef struct
{
    ElemType data;
    int cur; // 游标(Cursor), 为０时表示无指向
} Component, StaticLinkList[MAXSIZE];
*/