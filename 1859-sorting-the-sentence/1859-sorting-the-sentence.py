class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = []
        s = s.split()

        for i in range(len(s)):
            result.append("")

        for i in s:
            index = int(i[-1]) - 1
            result[index] = i[:-1]

        return " ".join(result)