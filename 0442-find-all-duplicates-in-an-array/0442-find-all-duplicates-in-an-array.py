class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        seen = set()
        duplicate = set()

        for num in nums:
            if num not in seen:
                seen.add(num) #add is used here not append
            else:
                duplicate.add(num)
        return list(duplicate)