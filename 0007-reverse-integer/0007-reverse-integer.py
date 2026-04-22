class Solution(object):
    def reverse(self, x):
        sign = -1 if x < 0 else 1 #important line for sign
        x = abs(x)

        output = 0

        while x > 0:
            ld = x % 10
            x = x // 10
            output = output * 10 + ld

        output *= sign

        # 32-bit overflow check
        if output < -2**31 or output > 2**31 - 1:
            return 0

        return output