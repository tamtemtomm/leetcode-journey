class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        
        nums.sort()
        closest_sum = float('inf')

        for i in range(len(nums) -2):
            l, r = i + 1, len(nums) -1
            while l < r:
                cur_sum = nums[i] + nums[l] + nums[r]
                if abs(cur_sum - target) < abs(closest_sum - target):
                    closest_sum = cur_sum
                
                elif cur_sum < target : 
                    l += 1
                
                elif cur_sum > target:
                    r -= 1

                else :
                    return target
        
        return closest_sum