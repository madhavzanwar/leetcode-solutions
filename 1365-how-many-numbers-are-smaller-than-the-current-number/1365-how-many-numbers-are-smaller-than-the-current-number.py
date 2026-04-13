class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result = []
        
        for i in nums:
            count = 0
            for j in nums:
                if j < i:
                    count += 1
            result.append(count)
        return result
            

            

             #You don't need to check for j != i,  since nums[j] is 
             #never less than nums[i] when j = i
            



                

        