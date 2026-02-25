class Solution(object):
    def findClosest(self, x, y, z):
        """
        :type x: int
        :type y: int
        :type z: int
        :rtype: int
        """

        if(abs(y-z)>abs(z-x)):
            return 1
        elif(abs(y-z)<abs(z-x)):
            return 2
        else:
            return 0

    