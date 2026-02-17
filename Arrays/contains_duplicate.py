class Solution(object):
    def containsDuplicate(self, nums):

        repeat = set()

        for num in nums:
            if num in repeat:
                return True
            repeat.add(num)

        return False
