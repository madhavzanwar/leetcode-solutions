class Solution(object):
    def passwordStrength(self, password):
        """
        :type password: str
        :rtype: int
        """
        points = 0
        digits = set(ch for ch in password if ch.isdigit())
        lower = set(ch for ch in password if ch.islower())
        upper = set(ch for ch in password if ch.isupper())
        special = set(ch for ch in password if ch in "!@#$")



        points += len(digits) * 3
        points += len(lower) * 1
        points += len(upper) * 2
        points += len(special) * 5
    
       
        return points
        