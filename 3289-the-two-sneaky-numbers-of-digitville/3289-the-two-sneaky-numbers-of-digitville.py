class Solution(object):
    def getSneakyNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        seen = set()
        sneaky = []

        for num in nums:
             if num in seen:
                 sneaky.append(num)
             else:
                 seen.add(num)
        return sneaky
