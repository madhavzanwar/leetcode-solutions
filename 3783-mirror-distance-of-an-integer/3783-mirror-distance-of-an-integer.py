class Solution(object):
    def mirrorDistance(self, n):
        """
        :type n: int
        :rtype: int
        """
        
        reverse = int(str(n)[::-1])

        return abs(n - reverse)
        