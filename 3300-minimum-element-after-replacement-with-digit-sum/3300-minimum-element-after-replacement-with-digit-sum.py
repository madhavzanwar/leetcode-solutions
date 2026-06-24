class Solution(object):
    def minElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = []
        for i in range(len(nums)):
            digit_sum = sum(int(d) for d in str(nums[i]))
            result.append(digit_sum)
        return min(result)

        
