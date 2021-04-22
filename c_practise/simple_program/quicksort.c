//别人的答案
int partition(int a[], int start, int end)
{
    int pivot = a[end];
    while (start < end)
    {
        while (start<end && a[start]<=pivot)
        {
            ++start;
        }
        a[end] = a[start];
        while (start<end && a[end]>=pivot)
        {
            --end;
        }
        a[start] = a[end];
    }
    a[start] = pivot;
    return start;
}

//自己写的
int partition(int start, int end)
{
    int pivot = a[start];
    int i, j, k;
    int less_num = 0, larger_num = 0;

    for (i=start; i<=end; i++)
    {
        if (a[i] < pivot)
        {
            less_num++;
        }
        if
        {
            larger_num++;
        }
    }

    int less[less_num], larger[larger_num];
    int mid = less_num;

    i = j = k = 0;
    while (i<less_num && a[k]<pivot)
    {
        less[i++] = a[k++];
    }

    k = 0;
    while (j<larger_num && a[k]>pivot)
    {
        larger[j++] = a[k++];
    }

    i = j = k = 0;
    while (k <= end)
    {
        if (k <= less_num)
        {
            a[k++] = less[i++];
        }
        else if (k == less_num)
        {
            a[k++] = pivot
        }
        else
        {
            a[k++] = larger[j++];
        }
    }

    return mid;
}

void quicksort(int start, int end)
{
    int mid;
    if (end > start)
    {
        mid = partition(start, end);
        quicksort(start, mid-1);
        quicksort(mid+1, end);
    }
}
