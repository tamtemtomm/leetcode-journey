
int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int closest_sum = pow(10, 7);

    for (int i = 0; i < numsSize - 2; i++){
        int l = i + 1;
        int r = numsSize - 1;

        while (l < r){
            int cur_sum = nums[i] + nums[l] + nums[r];

            if (abs(cur_sum - target) < abs(closest_sum - target)){
                closest_sum = cur_sum;
            }

            if (cur_sum < target) l++;
            else if (cur_sum > target) r--;
            else return target;
        }
    }

    return closest_sum;
}