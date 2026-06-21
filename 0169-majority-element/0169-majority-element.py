class Solution(object):
    def majorityElement(self, nums):
        freq = {}

        for num in nums:
            freq[num] = freq.get(num, 0) + 1 #imp

            if freq[num] > len(nums)//2:
                return num