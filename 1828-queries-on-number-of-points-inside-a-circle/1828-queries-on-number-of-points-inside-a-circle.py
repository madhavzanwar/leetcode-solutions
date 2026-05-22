class Solution(object):
    def countPoints(self, points, queries):
        """
        :type points: List[List[int]]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        result = []
        
        for i in queries:
            count = 0
            x1=i[0]
            y1=i[1]
            r=i[2]
            for j in points:
                if sqrt((x1 - j[0])**2 + (y1 - j[1])**2) <= r:
                    count+=1
            result.append(count)
        return result
        