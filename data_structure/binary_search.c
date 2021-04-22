Position BinarySearch( List L, ElementType X )
{
    Position head, last, mid, result;
    head = 0;
    last = L->Last;
    mid = (last + head)/2;

    while (L->Data[mid] != X)
    {
        if (L->Data[mid] == X)
            return mid;
        if (L->Data[mid] > X)
        {
            last = mid - 1;
            mid = (last + head)/2;
        }
        if (L->Data[mid] < X)
        {
            head = mid + 1;
            mid = (last + head)/2;
        }
    }

    return NotFound;
}
