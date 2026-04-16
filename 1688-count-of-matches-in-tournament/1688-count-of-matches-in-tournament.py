class Solution(object):
    def numberOfMatches(self, n):
        """
        :type n: int
        :rtype: int
        """
        """
         For each match, a loser is generated.
           Finally, there is only one winner; that is, there are n-1 loser generated.
           Therefore, the total match is n - 1
        """
        return n-1