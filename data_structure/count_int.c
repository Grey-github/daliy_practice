int count(int a[], int x, int left, int right) // left, right分别为最小，最大下标
{
    int center = (left + center) / 2;
    int count_left, count_right;

    if (left == right) //递归基
    {
        if (a[left] == x)
            return 1;
        else
            return 0;
    }

    count_left = count(a, x, left, center); // 统计左半部分出现次数
    count_right = count(a, x, center + 1, right); // 统计右半部分出现次数

    return count_left + count_right;
}
