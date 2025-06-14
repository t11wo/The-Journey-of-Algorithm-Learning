#include<stdio.h>

int Max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}

int rob(int *nums, int numsSize)
{

    if (numsSize == 0)
    {
        return 0;
    }

    if (numsSize == 1)
    {
        return nums[0];
    }

    if (numsSize == 2)
    {
        return Max(nums[0], nums[1]);
    }

    int NUM1 = nums[0];
    int NUM2 = nums[1];

    for (int i = 2; i < numsSize; i++)
    {
        int temp = Max(nums[i] + NUM1, NUM2);
        NUM1 = NUM2;
        NUM2 = temp;
    }

    return NUM2;
}

int main(){

    int list[4] = {1, 2, 3, 1};
    rob(list, 4);

    return 0;
}