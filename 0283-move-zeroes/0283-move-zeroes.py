class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        non_zero = []
        for i in range(len(nums)):
            if nums[i] != 0:
                non_zero.append(nums[i])

        for i in range(len(non_zero)):
            nums[i] = non_zero[i]

        for i in range(len(non_zero), len(nums)): #imp
            nums[i] = 0

