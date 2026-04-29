class Solution(object):
    def subsetXORSum(self, nums):
        res = 0
        
        
        for num in nums:
            res |= num
        
       
        return res * (1 << (len(nums) - 1))