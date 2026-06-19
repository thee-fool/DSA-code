from collections import defaultdict
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        size= len ( nums )
        k=size//3
        d=defaultdict(int)
        res=[]

        for i in nums:
            d[i]+=1
        for key in d:
            if d[key] > k :
                res.append(key)
        return res 


