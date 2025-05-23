class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        for i, c in enumerate(haystack) :
            if c == needle[0]:
                if haystack[i: i + len(needle)] == needle:
                    return i
            else :
                continue
        
        return -1

        