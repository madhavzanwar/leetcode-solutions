class Solution(object):
    def pivotArray(self, nums, pivot):
        """
        :type nums: List[int]
        :type pivot: int
        :rtype: List[int]
        """
        small = []
        large = []
        equal = []
        for i in nums:
            if i<pivot:
                small.append(i)
            elif i>pivot:
                large.append(i)
            elif i==pivot:
                equal.append(i)
                          
        return small+equal+large
        
