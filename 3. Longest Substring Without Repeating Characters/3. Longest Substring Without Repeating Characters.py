class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        chars = []
        ans = ""
        cur_ans = ""
        for char in s : 
            if char not in chars : 
                chars.append(char)
                ans = ans + char
            else : 
                ans = ans[ans.index(char) + 1:] + char
                chars = [c for c in ans]
            
            if len(ans) > len(cur_ans) : 
                cur_ans = ans
        
        return len(cur_ans)
