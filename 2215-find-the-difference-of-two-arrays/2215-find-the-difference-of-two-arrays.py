class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        result1 = []
        result2 = []

        for num in nums1:
            if num not in nums2 and num not in result1:
                result1.append(num)

        for num in nums2:
            if num not in nums1 and num not in result2:
                result2.append(num)

        return [result1, result2]