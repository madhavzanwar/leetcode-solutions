class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        """
        :type hours: List[int]
        :type target: int
        :rtype: int
        """
        output = 0
        for i in hours:
            if i>=target:
                output += 1
        return output

        