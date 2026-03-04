class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        c = int(a, 2)+int(b, 2)
        return bin(c)[2:]
        #python adds 0b to show it's binary, so to remove it
        #we used slicing method