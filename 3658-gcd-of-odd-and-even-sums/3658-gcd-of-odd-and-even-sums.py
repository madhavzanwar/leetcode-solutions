class Solution(object):
    def gcdOfOddEvenSums(self, n):
        """
        :type n: int
        :rtype: int
        """
        #Sum of first n odd numbers = n²
        #Sum of first n even numbers = n(n+1)
        #GCD(n² , n(n+1))
        return n