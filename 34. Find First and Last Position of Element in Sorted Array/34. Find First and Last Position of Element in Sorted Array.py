class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def searchLeft():
            l, r = 0, len(nums) - 1
            while l <= r:
                m = (l + r) // 2
                if nums[m] < target : l = m + 1
                else : r = m - 1
            return l

        def searchRight():
            l, r = 0, len(nums) - 1
            while l <= r : 
                m = (l + r) // 2
                if nums[m] > target : r = m - 1
                else : l = m + 1
            return r
        
        left = searchLeft()
        right = searchRight()

        if left <= right and nums[left] == target and nums[right] == target:
            return [left, right]
        else:
            return [-1, -1]