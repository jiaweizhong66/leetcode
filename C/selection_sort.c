
void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

// find smallest in array and swap to corresponding spot
void selection_sort(int a[], int len)
{
    int pos = 0;
    for (int i = 0; i < len - 1; ++i)
    {
        pos = i;
        for (int j = i + 1; j < len; ++j)
        {
            if (a[j] < a[pos])
            {
                pos = j;
            }
        }
        swap(&a[i], &a[pos]);
    }
}