class Solution(object):
    def maximumProduct(self, nums):
        nums.sort()
        return max(nums[-1]*nums[-2]*nums[-3], nums[0]*nums[1]*nums[-1])
        # The maximum product could either be the product of the three largest positive numbers, or
        # The product of the two smallest negative numbers, and the largest positive number.
        