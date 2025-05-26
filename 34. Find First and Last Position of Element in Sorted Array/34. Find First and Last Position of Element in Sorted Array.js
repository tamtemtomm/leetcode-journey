/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    var searchLeft = function(){
        let l = 0
        let r = nums.length - 1

        while (l <= r){
            let m = Math.floor((l + r)/2)
            if (nums[m] < target) l = m + 1
            else r = m - 1
        }
        return l
    }

    var searchRight = function(){
        let l = 0
        let r = nums.length - 1

        while(l <= r){
            let m = Math.floor((l + r)/2)
            if (nums[m] > target) r = m - 1
            else l = m + 1
        }

        return r
    }

    const left = searchLeft()
    const right = searchRight()

    if (left <= right && nums[left] == target && nums[right] == target){
        return [left, right]
    } else {
        return [-1, -1]
    }
};