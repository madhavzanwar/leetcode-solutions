class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        
        k = abs(high-low) // 2 
        if low%2 !=0 or high%2 !=0:
            k+=1
        return k
        
