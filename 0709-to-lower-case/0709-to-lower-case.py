class Solution(object):
    def toLowerCase(self, s):
        """
        :type s: str
        :rtype: str
        """
        lower = ""
        for char in s:
            ascii = ord(char)
            if 65 <= ascii <= 90:#A TO Z in ASCII
                lower += chr(ascii+32)
            else:
                lower += char
        return lower

        # return s.lower() -> using library function