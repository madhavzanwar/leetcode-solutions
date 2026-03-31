class Solution(object):
    def countConsistentStrings(self, allowed, words):
        """
        :type allowed: str
        :type words: List[str]
        :rtype: int
        """
        ans = 0
        allowed_set = set(allowed)
        for word in words:
            if set(word).issubset(allowed_set):
                ans += 1

           
        return ans

