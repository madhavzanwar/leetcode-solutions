class Solution(object):
    def digitFrequencyScore(self, n):
        """
        :type n: int
        :rtype: int
        """
        digit_array = list(map(int, str(n)))
        return sum(digit_array)