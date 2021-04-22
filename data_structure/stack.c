#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 //存储空间初始分配量
typedef int Status; // Status是函数的类型，其值是函数结果状态代码，如OK等 

// 栈的顺序存储结构
typedef int SElemType; // SElemType类型根据实际情况而定，这里假设为int
typedef struct
{
    SElemType data[MAXSIZE];
    int top;    // 用于栈顶指针
} SqStack;

// 插入元素ｅ为新的栈顶元素
Status Push(SqStack* S, SElemType e)
{
    if (S->top == MAXSIZE - 1) // 栈满
        return ERROR;
    S->top++; // 栈顶指正加一
    S->data[S->top] = e; // 将新插入元素赋值给栈顶空间
    return OK;
}

// 若栈不空，则删除Ｓ的栈顶元素，用ｅ返回其值，并返回ＯＫ；否则返回ERROR;
Status Pop(SqStack* S, SElemType* e)
{
    if (S->top == -1)
        return ERROR;
    *e = S->data[S->top]; // 将要删除的栈顶元素赋值给ｅ
    S->top--; // 将栈顶元素减一
    return OK;
}

// 两栈共享空间结构
typedef struct
{
    SElemType data[MAXSIZE];
    int top1; //  栈１栈顶指针
    int top2; // 栈２栈顶指针
} SqDoubleStack;

// 插入元素ｅ为新的栈顶元素
Status Push(SqDoubleStack* S, SElemType e, int stackNumber)
{
    if (S->top1 + 1 == S->top2) // 栈已满，不能再ｐｕｓｈ新元素了
        return ERROR;
    if (stackNumber == 1) // 栈１有元素进栈
        S->data[++S->top1] = e; // 若栈１则先ｔｏｐ１＋１后给数组元素赋值
    else if (stackNumber == 2) // 栈２有元素进栈
        S->data[--S->top2] = e; // 若栈２则先ｔｏｐ２－１后给数组元素赋值
    return OK;
}

// 若栈不空，则删除Ｓ的栈顶元素，用ｅ返回其值，并返回ＯＫ；否则返回ＥＲＲＯＲ
Status Pop(SqDoubleStack* S, SElemType* e, int stackNumber)
{
    if (stackNumber == 1)
    {
        if (S->top1 == -1)
            return ERROR; // 说明栈１已是空栈，溢出
        *e = S->data[S->top1--]; // 将栈１的栈顶元素出栈
    }
    else if (stackNumber == 2)
    {
        if (S->top2 == MAXSIZE)
            return ERROR; // 说明栈２已是空栈，溢出
        *e = S->data[S->top2++]; // 将栈２的栈顶元素出栈
    }
    return OK;
}


// 栈的链式存储结构
typedef struct StackNode
{
    SElemType data;
    struct StackNode* next;
} StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
} LinkStack;

// 插入元素ｅ为新的元素
Status Push(LinkStack* S, SElemType e)
{
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = S->top; // 把当前的栈顶元素赋值给新结点的直接后继
    S->top = s; // 将新的结点ｓ赋值给栈顶指针
    S->count++;
    return OK;
}

// 若栈不空，则删除Ｓ的栈顶元素，用ｅ返回其值，并返回ＯＫ；否则返回ERROR
Status Pop(LinkStack* S, SElemType* e)
{
    LinkStackPtr p;
    if (StackEmpty(*S))
        return ERROR;
    *e = S->top->data;
    p = S->top; // 将栈顶指针赋值给ｐ
    S->top = S->top->next; // 使得栈顶指针下移一位，指向后一结点
    free(p); // 释放结点p
    S->count--;
    return OK;
}