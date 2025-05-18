class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {
            'I' : 1,  "V" : 5,  "X" : 10,
            "L" : 50, "C" : 100,"D" : 500, 
            "M" : 1000
        }

        total = 0
        prev = 0

        for c in reversed(s):
            curr = roman_map[c]
            if curr < prev:
                total = total - curr
            else : 
                total = total + curr
            
            prev = curr
        
        return total
                
