class Solution(object):
    def getFinalState(self, nums, k, multiplier):
        """
        :type nums: List[int]
        :type k: int
        :type multiplier: int
        :rtype: List[int]
        """

   
        for i in range(0,k):
            min_val = min(nums)
            index = nums.index(min_val)
            nums[index] = nums[index]*multiplier
        return nums