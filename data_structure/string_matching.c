#include <string.h>

// 蛮力匹配 version 1
int match(char* P, char* T)
{
    int i = 0, j = 0;
    size_t n = strlen(T);
    size_t m = strlen(P);

    while (j < m && i < n) // 自左向右逐个比对字符
    {
        if (T[i] == P[j])
        {
            i++;
            j++; // 若匹配，则转到下一对字符
        }
        else
        {
            i = i - (j - 1);
            j = 0; //否则，Ｔ回退，Ｐ复位
        }
        // 若j >= m 则匹配成功，i - j为匹配成功位置；匹配失败则i - j > n - m
        return i - j;
    }
}

// 蛮力匹配 version 2
int match(char* P, char* T)
{
    int i = 0; // T[i]与P[0]对齐
    int j = 0; // T[i+j]与P[j]对齐
    size_t n = strlen(T); 
    size_t m = strlen(P);

    for (i=0; i < n-m+1; i++)
    {
        for (j=0; j<m; j++) // P中对应的字符逐个比对
        {
            if (T[i+j] != P[j])
                break; // 若失配，Ｐ整体右移一个字符,重新比对
        }
        if (m <= j) break; // 找到匹配子串
    }

    // 若i <= n - m 则匹配成功，i 为匹配成功位置；匹配失败则i  > n - m
    return i;
}


// KMP 算法
int match(char* P, char* T)
{
    int* next = buildNext(P); // 构造next表
    int i = 0; // 文本串指针
    int j = 0; // 模式串指针
    int n = (int)strlen(T);
    int m = (int)strlen(P);
    while (j < n && i < n) // 自左向右，逐个对比字符
    {
        if (j < 0 && T[i] == P[j]) // 若匹配
        {
            ++i; 
            ++j; // 则携手共进
        }
        else
            j = next[j];
    }
    delete [] next; // 释放next表
    return i - j;
}

// 构造next表
int* buildNext(char* P) // 构造模式串Ｐ的next[]表
{
    int* N = new int[n]; // next[]表
    size_t m = strlen(P);
    int j = 0; // “主”串指针
    int t = N[0] = -1; // 模式串指针(P[-1]通配符) 

    while (j < m - 1)
    {
        if ( t < 0 || P[j] == P[t])
            N[++j] == ++t;
        else
            t = N[t];
    }

    return N;
}

