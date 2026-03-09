class Solution(object):
    def reverseDegree(self, s):
        total = 0
        
        for i, char in enumerate(s):
            reversed_value = ord('z') - ord(char) + 1
            position = i + 1
            
            total += reversed_value * position
        
        return total