class Solution(object):
    def findThePrefixCommonArray(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        seen = set()
        ans = []
        common = 0 
        
        for i in range(len(A)):
            if A[i] in seen:
                common += 1
            seen.add(A[i])
            
            if B[i] in seen:
                common += 1
            seen.add(B[i])
            
            ans.append(common)
        return ans
        
                
    
      
        