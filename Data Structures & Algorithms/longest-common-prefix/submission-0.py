class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort(key=len)
        a=''
        for i in range(len(strs[0])):            
            b=strs[0][i]
            for x in strs:
                if ( x[i] != b ):
                    return a
            a+=b
        return a
        