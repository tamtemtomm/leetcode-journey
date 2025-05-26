/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(sizeof(int) * (2));


    int searchRight(){
        int l = 0;
        int r = numsSize - 1;

        while (l <= r){
            int m = (l + r)/2;
            if (nums[m] > target) r = m - 1;
            else l = m + 1;
        }

        return r;
    }

    int left = searchLeft();
    int right = searchRight();

    if (left <= right && nums[left] == target && nums[right] == target){
        result[0] = left;
        result[1] = right;

    } else{
        result[0] = -1;
        result[1] = -1;
    }

    return result;
}