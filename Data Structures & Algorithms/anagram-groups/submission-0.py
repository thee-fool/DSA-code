from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic = defaultdict(list)
        for x in strs:
            a=[0]*26
            for y in x:
                a[ord(y)-ord('a')]+=1
            dic[tuple(a)].append(x)

        return list(dic.values())
            



                