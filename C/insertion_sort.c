void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

// consider the first element to be a sorted
// sequence(of length one) then insert the second
// element into the existing sequence into the
// correct position
void insertion_sort(int a[], int len)
{
    for (int i = 1; i < len; ++i)
    {
        for (int j = i; j > 0 && a[j - 1] > a[j]; --j)
        {
            swap(&a[j], &a[j - 1]);
        }
    }
}