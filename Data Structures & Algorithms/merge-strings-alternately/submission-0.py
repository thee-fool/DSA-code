class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n1=len(word1)
        n2=len(word2)
        i =0 
        s=''
        while True:
            if i == n1:
                s+=word2[i:n2]
                break
            if i == n2:
                s+=word1[i:n1]
                break
            s+=word1[i]
            s+=word2[i]
            i+=1
        return s
