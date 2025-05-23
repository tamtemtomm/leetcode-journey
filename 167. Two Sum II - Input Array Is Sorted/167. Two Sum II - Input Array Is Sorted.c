#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;

    // Allocate space for the result (2 integers)
    int* result = (int*)malloc(2 * sizeof(int));
    if (!result) return NULL; // malloc fail guard (optional)

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            // Return 1-based indices
            result[0] = left + 1;
            result[1] = right + 1;
            *returnSize = 2;
            return result;
        }
        else if (sum > target) {
            right--;
        }
        else {
            left++;
        }
    }

    // If no solution found (per problem constraints, this should never happen)
    *returnSize = 0;
    free(result);
    return NULL;
}
