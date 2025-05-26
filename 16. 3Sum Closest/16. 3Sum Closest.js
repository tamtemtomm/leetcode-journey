/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
    nums.sort((a, b) => a - b)
    closest_sum = Math.pow(10, 1000)

    for (let i = 0; i < nums.length - 2; i++){
        let l = i + 1
        let r = nums.length - 1

        while (l < r){
            const cur_sum = nums[i] + nums[l] + nums[r]
            if (Math.abs(cur_sum - target) < Math.abs(closest_sum - target)){
                closest_sum = cur_sum
            }

            if (cur_sum < target) l += 1
            else if (cur_sum > target) r -= 1
            else return target
        }
    }

    return closest_sum
};