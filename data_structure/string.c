// T为非空串，若主串Ｓ中第ｐｏｓ个字符之后存在与Ｔ相等的子串
// 则返回第一个这样的子串在Ｓ中的位置，否则返回０
int Index(String S, String T, int pos)
{
    int n, m, i;
    String sub;
    if (pos > 0)
    {
        n = StrLength(S); // 得到主串T的长度
        m = StrLength(T); // 得到子串Ｔ的长度
        i = pos;
        while (i <= n-m+1)
        {
            SubString(sub, S, i, m); // 取主串第ｉ个位置，长度与Ｔ相等子串给ｓｕｂ
            if (StrCompare(sub, T) != 0) // 如果两串不相等
                ++i;:w
                
            else    // 如果两串相等
                return i;   // 则返回ｉ值
        }
    }
}

// 返回子串Ｔ在主串Ｓ中第pos个字符之后的位置，若不存在，则函数返回值为０
// Ｔ非空，１<=pos<=StrLength(S)
// 假设Ｓ串与Ｔ串的长度存在于S[0]和T[0] 中
int Index(String S, String T, int pos)
{
    int i = pos; // i用于主串Ｓ中当前位置下标，若pos不为１
                          // 则从pos位置开始匹配
    int j = 1; // j用于子串Ｔ中当前位置下标值
    while (i <= S[0] && j <= T[0]) // 若ｉ小于Ｓ长度且ｊ小于Ｔ的长度时循环
    {
        if (S[i] == T[j]) // 两字母相等则继续
        {
            ++i;
            ++j;
        }
        else // 指针后退重新开始匹配
        {
            i = i - j + 2; // ｉ退回到上次匹配首位的下一位
            j = 1; // j退回子串Ｔ的首位
        }
        if (j > T[0])
            return i-T[0];
        else
            return 0;
    }
}

// KMP算法实现
int KMP(char* t, char* p)
{
    int i = 0;
    int j = 0;

    while (i < strlen(t) && j < strlen(p))
    {
        if (j == -1 || t[i] == p[j])
        {
            i++;
            j++;
        }
        else
            j = next[j];
    }

    if (j == strlen(p))
        return i - j;
    else
        return -1;
}

// 求next数组值
void getNext(char* p, int* next)
{
    next[0] = -1;
    int i = 0, j = -1;

    while (i <strlen(p))
    {
        if (j == -1 || p[i] ==  p[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
            j = next[j];
    }
}

// 通过计算返回子串Ｔ的next数组
void get_next(String T, int* next)
{
    int i, j;
    i = 1;
    j = 0;
    next[1] = 0;
    while (i < T[0]) // 此处Ｔ[0]表示串Ｔ的长度
    {
        if (j == 0 || T[i] == T[j]) // T[i]表示后缀的单个字符,
                                                     // T[j]表示前缀的单个字符
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
            j = next[j]; // 若字符不相同，则ｊ值回溯
    }
}

// 返回子串Ｔ在主串Ｓ中第pos个字符之后的位置，若不存在，则函数返回值为０
// Ｔ非空，１<=pos<= StrLength(S)
int Index_KMP(String S, String T, int pos)
{
    int i = pos; // i用于主串Ｓ当前位置下标值，若pos不为ｉ
                           // 则从pos位置开始匹配
    int j = 1; // j用于子串Ｔ中当前位置下标值
    int next[255]; // 定义next数组
    get_next(T, next); // 对串Ｔ作分析，得到next数组
    while (i <= S[0] && j <= T[0]) // 若ｉ小于Ｓ的长度且ｊ小于Ｔ的长度时，循环继续
    {
        if (j == 0 || S[i] == T[j]) //两字母相等则继续，与朴素算法增加了ｊ＝０判断
        {
            ++i; 
            ++j;
        }
        else // 指针后退重新开始匹配
        {
            j = next[j]; // j退回合适的位置，ｉ值不变
        }
        if (j >T[0])
            return i-T[0];
        else
            return 0;

    }
}
