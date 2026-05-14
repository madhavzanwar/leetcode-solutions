class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        for char in s:
            if char in t:
                t = t.replace(char,"", 1)
            else:
                return char
        return t

