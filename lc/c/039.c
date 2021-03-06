int findMin(int* nums, int numsSize){
    int l = 0, r = numsSize-1;
    while (l < r) {
        int m = l + (r-l)/2;
        if (nums[m] > nums[r])
            l = m+1;
        else
            r = m;
    }
    return nums[l];
}
