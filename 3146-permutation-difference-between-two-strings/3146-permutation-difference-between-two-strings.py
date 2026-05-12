class Solution(object):
    def findPermutationDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
        
        x,y = {},{}
        output = 0
        
        for i in range(len(s)):
            x[s[i]]=i
            
        for i in range(len(t)):
            y[t[i]]=i
        
        
        for char in s:
            output += abs(x[char]-y[char])
        return output