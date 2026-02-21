class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        INT_MIN = -2**31
        INT_MAX = 2**31 - 1

        sign = -1 if (dividend < 0) != (divisor < 0) else 1
        a = abs(dividend)
        b = abs(divisor)

        c = (a/b)

        result = sign*c

        

        if dividend == -2**31 and divisor == -1:
            return 2**31 - 1
        elif result < INT_MIN:
            return INT_MIN
        elif result > INT_MAX:
            return INT_MAX
        else:
            return result