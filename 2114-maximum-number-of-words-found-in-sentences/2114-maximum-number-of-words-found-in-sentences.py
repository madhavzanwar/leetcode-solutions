class Solution(object):
    def mostWordsFound(self, sentences):
        words = 0
        
        for i in range(len(sentences)):
            count = len(sentences[i].split(' '))
            if count > words:
                words = count
        
        return words