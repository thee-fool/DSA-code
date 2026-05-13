class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n=len(nums)
        b=n/2
        d=defaultdict(int)
        for i in nums:
            d[i]+=1
            if (d[i]>b):
                return i
        