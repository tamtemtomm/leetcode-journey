/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for(i = 0; i < nums.length; i ++){
        j = i + 1
        while (j < nums.length){
            if (nums[i] + nums[j] == target) return [i, j]
            j = j + 1
        }
    }
};