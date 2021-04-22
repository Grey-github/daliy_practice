template<class Type>
int BinarySearch(Type a[], const Type& x, int left, int right)
{
    bool flag = true; // 检测是否找到ｘ
    while (left <= right)
    {
        int middle = (left + right)/2;
        if (x == a[middle])
        {
            flag = false;
            return middle;
        }
        if (x > a[middle])
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    if (flag) // 没找到时输出ｉ和ｊ
    {
        cout << "i=" << right << ", "
            << "j=" << left << endl;
    }
}

