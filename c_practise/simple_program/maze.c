#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

struct point
{
    int row, col;
}stack[512];

int top = 0;

void push(struct point p)
{
    stack[top++] = p;
}

struct point pop(void)
{
    return stack[--top];
}

int is_empty(void) //判断栈是否为空
{
    return top == 0;
}

int maze[MAX_ROW][MAX_COL] = {
    0, 1, 0, 0, 0,
    0, 1, 0, 1, 0,
    0, 0, 0, 0, 0,
    0, 1, 1, 1, 0,
    0, 0, 0, 1, 0,
};

void print_maze(void) //打印已改变的二维数组
{
    int i, j;
    for (i=0; i<MAX_ROW; i++)
    {
        for (j=0; j<MAX_COL; j++)//第一次因此处的j<MAX_COL中的j错写成i，导致栈溢出，应引以为戒
        {
            printf("%d ", maze[i][j]);
        }
        putchar('\n');
    }
    printf("*********\n");
}

struct point predecessor[MAX_ROW][MAX_COL] = {
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
};

void print_successor(struct point p) //实现从起点打印到路径点到终点
{
    int i = 0, point_num;
    struct point successor[25];
    while (predecessor[p.row][p.col].row != -1) //将所有经过的点存到一个数组中
    {
        successor[i++] = p;
        p = predecessor[p.row][p.col];
    }

    point_num = i;
    for (i=point_num; i>=0; i--)
    {
        printf("(%d, %d)\n", successor[i].row, successor[i].col);
    }
}


void visit(int row, int col, struct point pre)
{
    struct point visit_point = {row, col};
    maze[row][col] = 2;
    predecessor[row][col] = pre;
    push(visit_point);
}

int main(void)
{
    struct point p = {0, 0};

    maze[p.row][p.col] = 2;
    push(p);

    while(!is_empty())
    {
        p = pop();
        if (p.row == MAX_ROW - 1 //goal
            && p.col == MAX_COL - 1)
        {
            break;
        }
        if (p.col+1 < MAX_COL //right
            && maze[p.row][p.col+1] == 0)
        {
            visit(p.row, p.col+1, p);
        }
        if (p.row+1 < MAX_ROW //down
            && maze[p.row+1][p.col] == 0)
        {
            visit(p.row+1, p.col, p);
        }
        if (p.col-1 >= 0 //left
            && maze[p.row][p.col-1] == 0)
        {
            visit(p.row, p.col-1, p);
        }
        if (p.row-1 >= 0 // up
            && maze[p.row-1][p.col] == 0)
        {
            visit(p.row-1, p.col, p);
        }
        print_maze();
    }
    if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1)
    {
        print_successor(p);
        /*printf("(%d, %d)\n", p.row, p.col);
        while (predecessor[p.row][p.col].row != -1)
        {
            p = predecessor[p.row][p.col];
            printf("(%d, %d)\n", p.row, p.col);
        }*/
    }
    else
    {
        printf("No path!\n");
    }

    return 0;
}

/*pseudo code
 *将起点标记为已走过并压栈
 while（栈非空）
 {
    从栈顶弹出一个点p；
    if （p这个点是终点）
    {
        break；
    }
    否则沿右，下，左，上四个方向探索相邻的点
    if（和p相邻的点有路可走，并且还没走过）
        将相邻的点标记为已走过并压栈，它的前驱就是p点；
 }
 if (p点是终点)
 {
    答应p点的坐标；
    while（p点有前驱）
    {
        p点 = p点的前驱；
        打印p点的坐标；
    }
 }
 else
 {
    没有路线可以到达终点；
 }
 */
