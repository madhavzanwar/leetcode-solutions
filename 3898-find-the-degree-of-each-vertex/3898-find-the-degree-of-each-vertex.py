class Solution(object):
    def findDegrees(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        output = []
        for i in matrix:
            output.append(sum(i))
        return output
        