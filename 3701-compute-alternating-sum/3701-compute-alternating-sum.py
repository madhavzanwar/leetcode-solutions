class Solution(object):
    def alternatingSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum = 0
        
        for i in range(len(nums)):
            if (i%2 == 0):
                sum = sum + nums[i]
            else:
                sum = sum - nums[i]
        return sum
            