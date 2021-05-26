void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

// select first element as pivot
// move all elements larger than pivot to back
// swap pivot to correct position
// recursively sort the smaller and larger
// subarrays

void quick_sort_range(int a[], int first, int last)
{
    int pivot = a[first];
    int pos = last;

    for (int i = last; i > first; --i)
    {
        if (a[i] > pivot)
        {
            swap(&a[pos], &a[i]);
            --pos;
        }
    }
    swap(&a[first], &a[pos]);
    quick_sort_range(a, first, pos - 1);
    quick_sort_range(a, pos + 1, last);
}

void quick_sort(int a[], int len)
{
    quick_sort_range(a, 0, len - 1);
}