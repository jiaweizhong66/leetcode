int search(int *nums, int numsSize, int target)
{
    int small = 0;
    int big = numsSize - 1;

    if (numsSize == 1)
    {
        if (nums[0] == target)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    while (small <= big)
    {
        int mid = (small + big) / 2;
        if (small == big - 1)
        {
            if (nums[mid] == target)
            {
                return small;
            }
            else if (nums[big] == target)
            {
                return big;
            }
            else
            {
                break;
            }
        }
        if (nums[mid] > target)
        {
            big = mid;
        }
        else if (nums[mid] < target)
        {
            small = mid;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}