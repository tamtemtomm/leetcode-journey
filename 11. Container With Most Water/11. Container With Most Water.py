class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """

        cur_max_area = 0
        n = len(height)
        left = 0
        right = n-1

        while left < right : 
            h = min(height[left], height[right])
            w = right - left

            area = h * w
            if area > cur_max_area : cur_max_area = area

            if height[left] < height[right]:
                left += 1
            else : 
                right -= 1
        
        return cur_max_area