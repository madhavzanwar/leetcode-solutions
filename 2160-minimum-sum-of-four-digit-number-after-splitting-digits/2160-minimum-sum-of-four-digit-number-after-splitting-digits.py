class Solution(object):
    def minimumSum(self, num):
        """
        :type num: int
        :rtype: int
        """
        num = list(map(int, str(num)))
        sorted_num = sorted(num)
        num1 = []
        num2 = []
        num1.insert(0, sorted_num[0])
        num1.append(sorted_num[2])
        
        num2.insert(0, sorted_num[1])
        num2.append(sorted_num[3])

        first = num1[0]*10 + num1[1]*1 #important step
        second = num2[0]*10 + num2[1]*1
        
        return first + second
        




        