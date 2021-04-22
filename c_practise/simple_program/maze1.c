#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

struct point
{
    int row, col, predecessor;
}queue[512];

int head = 0, tail = 0;

void enqueue(struct point p)
{
    queue[tail++] = p;
}

struct point dequeue(void)
{
    return queue[head++];
}

int is_empty(void)
{
    return head == tail;
}

int maze[MAX_ROW][MAX_COL] = {
    0, 1, 0, 0, 0,
    0, 1, 0, 1, 0,
    0, 0, 0, 0, 0,
    0, 1, 1, 1, 0,
    0, 0, 0, 1, 0,
};

void print_maze(void)
{
    int i, j;
    for (i=0; i<MAX_ROW; i++)
    {
        for (j=0; j<MAX_COL; j++)
        {
            printf("%d ", maze[i][j]);
        }
        putchar('\n');
    }
    printf("*********\n");
}

void visit(int row, int col)
{
    struct point visit_point = {row, col, head-1};
    maze[row][col] = 2;
    enqueue(visit_point);
}

int main(void)
{
    struct point p = {0, 0, -1};

    maze[p.row][p.col] = 2;
    enqueue(p);

    while (!is_empty())
    {
        p = dequeue();
        if (p.row == MAX_ROW -1 //goal
            && p.col == MAX_COL - 1)
        {
            break;
        }
        if (p.col+1 < MAX_COL //right
            && maze[p.row][p.col+1] == 0)
        {
            visit(p.row, p.col+1);
        }
        if (p.row+1 < MAX_ROW
            && maze[p.row+1][p.col] == 0)
        {
            visit(p.row+1, p.col);
        }
        if (p.col-1 >= 0
            && maze[p.row][p.col-1] == 0)
        {
            visit(p.row, p.col-1);
        }
        if (p.row-1 >= 0
            && maze[p.row-1][p.col] == 0)
        {
            visit(p.row-1, p.col);
        }
        print_maze();
    }
    if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1)
    {
        printf("(%d, %d)\n", p.row, p.col);
        while (p.predecessor != -1)
        {
            p = queue[p.predecessor];
            printf("(%d, %d)\n", p.row, p.col);
        }
    }
    else
    {
        printf("No path!\n");
    }

    return 0;
}

/*pseudo code
*将起点标记为已走过并入队；
while (队列非空)
{
    出队一个点p；
    if（p这个点是终点）
    {
        break；
    }
    否则沿右，下，左，上四个方向探索相邻的点
    if（和p相邻的点有路可走，并且还没走过）
    {
        将相邻的点标记为走过并入队，它的前驱就是刚出队的p点；
    }
}
if (p是终点)
{
    打印p点的坐标；
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
