class Solution(object):
    def minBitFlips(self, start, goal):
        """
        :type start: int
        :type goal: int
        :rtype: int
        """
       
        start = bin(start)[2:]
        goal = bin(goal)[2:]
        max_len = max(len(start), len(goal))
        start = start.zfill(max_len)#padding
        goal = goal.zfill(max_len)
        
        count = 0
        for a, b in zip(start, goal): #zip(start, goal) pairs elements from both strings together position by position.
            if a!=b:
                count+=1
        return count



