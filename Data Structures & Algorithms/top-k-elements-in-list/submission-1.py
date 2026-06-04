from collections import defaultdict
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        n=len(nums)
        b=defaultdict(int)
        for num in nums:
            b[num]+=1
        arr=sorted(b.items(), key=lambda x:x[1], reverse=True)
        a=[]
        for i in range(k):
            a.append(arr[i][0])
        return a


            
