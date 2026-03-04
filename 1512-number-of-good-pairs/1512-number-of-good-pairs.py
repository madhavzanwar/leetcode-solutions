class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        output = 0
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                 if nums[i] == nums[j] and i < j:
                     output = output + 1
        return output