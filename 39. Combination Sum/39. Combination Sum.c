#include <stdlib.h>
#include <string.h>

// Helper function
void backtrack(int* candidates, int candidatesSize, int target,
               int* path, int pathSize,
               int*** result, int* returnSize, int** returnColumnSizes,
               int start) {
    
    if (target == 0) {
        // Allocate memory for a new combination
        int* combination = (int*)malloc(sizeof(int) * pathSize);
        memcpy(combination, path, sizeof(int) * pathSize);

        // Store this combination
        (*result)[*returnSize] = combination;
        (*returnColumnSizes)[*returnSize] = pathSize;
        (*returnSize)++;
        return;
    }

    for (int i = start; i < candidatesSize; i++) {
        if (candidates[i] > target) continue;

        path[pathSize] = candidates[i];
        backtrack(candidates, candidatesSize, target - candidates[i],
                  path, pathSize + 1, result, returnSize, returnColumnSizes, i);
    }
}

int** combinationSum(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes) {
    int** result = (int**)malloc(sizeof(int*) * 200);             // Allocate space for up to 200 combinations
    *returnColumnSizes = (int*)malloc(sizeof(int) * 200);         // Column sizes for each result row
    *returnSize = 0;

    int* path = (int*)malloc(sizeof(int) * 100);                  // Temporary array to hold current combination

    backtrack(candidates, candidatesSize, target, path, 0, &result, returnSize, returnColumnSizes, 0);

    free(path); // clean up temporary path
    return result;
}
