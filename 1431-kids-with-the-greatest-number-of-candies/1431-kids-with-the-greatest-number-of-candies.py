class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        ans = []
        max_candy = max(candies)
        for i in candies:
            if i + extraCandies >= max_candy:
                ans.append(True)
            else:
                ans.append(False)
        return ans
        