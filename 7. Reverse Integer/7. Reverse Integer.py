class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """

        if x == 0 or x > 2147483647 or x < -2147483647 : return 0

        new_str = ""
        nol_digits = True
        
        for s in str(x)[::-1]:
            if s == "-": 
                new_str = "-" + new_str
                continue
            if s != '0' : 
                nol_digits = False
            if s == '0' and nol_digits : 
                continue
            
            new_str = new_str + s
        
        if int(new_str) > 2147483647 or int(new_str) < -2147483647 : return 0

        return int(new_str)