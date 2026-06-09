class Solution:

    def encode(self, strs: List[str]) -> str:
        s=''
        for i in strs:
            length=len(i)
            s+= str(length)
            s+='#'
            s+=i
        return s

    def decode(self, s: str) -> List[str]:
        lis=[]
        i=0
        while i<len(s):
            j=i
            while (s[j] != '#') :
                j+=1
            length = int(s[i:j])
            word= s[j+1:j+length+1]
            lis.append(word)
            i=j+1+length
        return lis
            




            


        