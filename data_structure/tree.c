#include <stdio.h>

// 树的双亲表示法结点结构定义
#define MAX_TREE_SIZE 100
typedef int TElemType; // 树结点的数据类型，目前暂定为整型
typedef struct PTNode // 结点结构
{
    TElemType data; // 结点数据
    int parent; // 双亲位置
} PTNode;

typedef struct // 树结构
{
    PTNode nodes[MAX_TREE_SIZE]; // 结点数组
    int r, n; // 根的位置和结点数
} PTree;



// 树的孩子表示法结构定义
#define MAX_TREE_SIZE 100
typedef struct CTNode // 孩子结点
{
    int child;
    struct CTNode* next;
} * ChildPtr;

typedef struct // 表头结构
{
    TElemType data;
    ChildPtr firstchild;
} CTBox;

typedef struct // 树结构
{
    CTBox nodes[MAX_TREE_SIZE]; // 结点数组
    int r, n; // 根的位置和结点数
} CTree;



// 树的孩子兄弟表示法结构定义
typedef struct CSNode
{
    TElemType data;
    struct CSNode* firstchild;
    struct CSNode* rightsib;
} CSNode, *CSTree;




// 二叉树的二叉链表结点结构表示
typedef struct BiTNode // 结点结构
{
    TElemType data; // 结点数据
    struct BiTNode* lchild;
    struct BiTNode* rchild;
} BiTNode, *BiTree;

// 二叉树的前序遍历递归算法
void PreOrderTraverse(BiTree T)
{
    if (T == NULL)
        return;
    printf("%c", T->data); // 显示结点数据，可以更改为其他对结点操作
    PreOrderTraverse(T->lchild); // 再先序遍历左子树
    PreOrderTraverse(T->rchild); // 最后先序遍历右子树
}

// 二叉树的中序遍历递归算法
void InOrderTraverse(BiTree T)
{
    if (T == NULL)
        return;
    InOrderTraverse(T->lchild); // 中序遍历左子树
    printf("%c", T->data); // 显示结点数据，可以更改为其他对结点操作
    InOrderTraverse(T->rchild); // 最后中序遍历右子树
}