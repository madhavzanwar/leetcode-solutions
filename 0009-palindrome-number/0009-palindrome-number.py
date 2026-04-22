class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        
        original = x #its important to store original number in a new variable for palindrome
        revnum = 0
        while x>0:
            ld = x%10
            x = x/10
            revnum = (revnum*10)+ld

        return revnum == original    