class Solution(object):
    def countDigitOccurrences(self, nums, digit):
        """
        :type nums: List[int]
        :type digit: int
        :rtype: int
        """
        count = 0
        for i in nums:
            j = str(i)
            
            for j in str(i):
                if j == str(digit):
                    count+=1
            
                
        return count


        