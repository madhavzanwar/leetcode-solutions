class Solution(object):
    def limitOccurrences(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        
        arr = []
        
        for i in nums:
            if arr.count(i) < k:
                arr.append(i)
                
        return arr