class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        res = [-1, -1]
        if len(nums) == 0 : return res

        left = 0
        right = len(nums) - 1

        while left <= right:
            m = (left + right) // 2
            val = nums[m]
            
            if val == target:
                l, r = m, m
                while l > 0 and nums[l - 1] == target:
                    l -= 1
                while r < len(nums) - 1 and nums[r + 1] == target:
                    r += 1
                return [l, r]
            
            elif val < target : left = m + 1
            else : right = m - 1
        

        return res