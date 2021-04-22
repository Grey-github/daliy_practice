#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 //存储空间初始分配量
typedef int Status; // Status是函数的类型，其值是函数结果状态代码，如OK等 
typedef int QElemType; // QElemType 类型根据实际情况而定，这里假设为int

// 循环队列的顺序存储结构
typedef struct
{
    QElemType data[MAXSIZE];
    int front; // 头指针
    int rear; // 尾指针，若队列不空，指向队列尾元素的下一个位置
} SqQueue;

// 初始化一个空队列
Status InitQueue(SqQueue* Q)
{
    Q->front = 0;
    Q->rear = 0;
    return OK;
}

// 返回Ｑ的元素个数，也就是队列当前长度
int QueueLength(SqQueue Q)
{
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

// 若队列未满，则插入元素ｅ为Ｑ新的队尾元素
Status EnQueue(SqQueue* Q, QElemType e)
{
    if ((Q->rear+1) % MAXSIZE == Q->front) // 队列满的判断
        return ERROR;
    Q->data[Q->rear] = e; // 将元素ｅ赋值给队尾
    Q->rear = (Q->rear+1) % MAXSIZE; // ｒｅａｒ指针向后移一位置, 若到最后则转到数组头部
    return OK;
}

// 若队列不空，则删除Ｑ中队头元素，用ｅ返回其值
Status DeQueue(SqQueue* Q, QElemType* e)
{
    if (Q->front == Q->rear) // 队列空的判断
        return ERROR;
    *e = Q->data[Q->front]; // 将队头元素赋值给ｅ
    Q->front = (Q->front + 1) % MAXSIZE; // ｆｒｏｎｔ指针后移一位，若到最后则转到数组头部
    return OK;
}


// 链式队列存储结构
typedef int QElemType; // QElemType类型根据实际情况而定，这里假设为ｉｎｔ

typedef struct QNode // 结点结构
{
    QElemType data;
    struct QNode* next;
} QNode, *QueuePtr;

typedef struct // 队列的链表结构
{
    QueuePtr front, rear; // 队头，队尾指针
} LinkQueue;

// 插入元素ｅ为Ｑ的新的队尾元素
Status EnQueue(LinkQueue* Q, QElemType e)
{
    QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
    if (s == NULL)
        exit(OVERFLOW); 
    s->data = e;
    s->next = NULL;
    Q->rear->next = s; // 把拥有元素ｅ新结点ｓ赋值给原队尾结点的后继
    Q->rear = s; // 把当前的ｓ设置为队尾结点，rear指向ｓ
    return OK; 
}

// 若队列不空，删除Ｑ的队头元素，用ｅ返回其值，并返回ＯＫ，否则返回ERROR
Status DeQueue(LinkQueue* Q, QElemType* e)
{
    QueuePtr p;
    if (Q->front == Q->rear)
        return ERROR;
    p = Q->front->next; // 将欲删除的队头结点暂存给ｐ
    *e = p->data; // 将欲删除的队头结点的值赋值给ｅ
    Q->front->next = p->next; // 将原队头结点后继p->next 赋值给头结点后继
    if (Q->rear == p) // 若队头是队尾，则删除后将rear指向头结点
        Q->rear = Q->front;
    free(p);
    return OK;
}