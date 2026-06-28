class Solution(object):
    def maximumElementAfterDecrementingAndRearranging(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        arr.sort()
        arr[0] = 1  # first element must always be 1
        for i in range(1, len(arr)):  #start from index 1
            if abs(arr[i] - arr[i - 1]) > 1:
                arr[i] = arr[i - 1] + 1  #go up by 1
        return max(arr)