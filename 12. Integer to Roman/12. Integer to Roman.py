class Solution:
    def intToRoman(self, num: int) -> str:
        val : List[int] = [
            1000, 900, 500, 400,
            100,  90,  50,  40,
            10,   9,   5,   4,
            1
        ]
        syms : List[str] = [
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV",
            "I"
        ]
        result : str = ""
        for i in range(len(val)):
            while num >= val[i]:
                result += syms[i]
                num -= val[i]
        return result