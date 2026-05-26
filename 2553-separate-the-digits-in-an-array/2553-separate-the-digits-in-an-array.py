class Solution(object):
    def separateDigits(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        output = []
        for i in nums:
            if i>=10:
                output.extend([int(digit) for digit in str(i)])
            else:
                output.append(i)
        return output

