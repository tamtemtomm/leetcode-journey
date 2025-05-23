class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX : int = 2**31 - 1
        INT_MIN : int = -2**31

        res : int = 0
        sign : int = -1 if x < 0 else 1
        x = abs(x)

        while x != 0:
            digit : int = x % 10
            x //= 10

            # Check overflow before multiplying
            if res > (INT_MAX - digit) // 10:
                return 0
            
            res : int = res * 10 + digit
        
        return sign * res