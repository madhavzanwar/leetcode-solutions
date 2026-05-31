class Solution(object):
    def canMakeArithmeticProgression(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        sort_arr = sorted(arr)
        diff = sort_arr[1] - sort_arr[0]

        for i in range(1, len(sort_arr)-1):
            if sort_arr[i+1] - sort_arr[i] != diff:
                return False

        return True