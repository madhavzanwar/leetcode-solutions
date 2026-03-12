class Solution(object):
    def convertDateToBinary(self, date):
        """
        :type date: str
        :rtype: str
        """
        date1 = date.split('-')
        date1[0] = bin(int(date1[0]))[2:]
        date1[1] = bin(int(date1[1]))[2:]
        date1[2] = bin(int(date1[2]))[2:]

        return ("-".join(date1)) 
        