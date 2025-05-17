class Solution:
    def myAtoi(self, s: str) -> int:
        INT_MAX : int = 2**31 - 1
        INT_MIN : int = -2**31

        i : int = 0
        n : int = len(s)
        result : int = 0
        sign : int = 1

        # Step 1: Skip leading whitespaces
        while i < n and s[i] == ' ':
            i += 1

        # Step 2: Check for sign
        if i < n and (s[i] == '+' or s[i] == '-'):
            sign = -1 if s[i] == '-' else 1
            i += 1

        # Step 3: Convert digits and stop on first non-digit
        while i < n and s[i].isdigit():
            digit : int = int(s[i])

            # Step 4: Check for overflow/underflow
            if result > (INT_MAX - digit) // 10:
                return INT_MAX if sign == 1 else INT_MIN

            result = result * 10 + digit
            i += 1

        return sign * result