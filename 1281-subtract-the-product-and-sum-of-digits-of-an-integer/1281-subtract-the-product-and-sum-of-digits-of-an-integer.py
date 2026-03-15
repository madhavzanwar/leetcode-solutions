class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        add = 0
        product = 1
        num = [int(d) for d in str(n)]
        for i in num:
            add += i
            product *= i
        return (product - add)


        

        
