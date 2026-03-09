class Solution(object):
    def reversePrefix(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        flipped = s[:k][::-1]
        unflipped = s[k:len(s)]
        return flipped + unflipped