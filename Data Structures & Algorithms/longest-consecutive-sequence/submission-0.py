class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=set(nums)
        longest=0
        for num in s:
            if num -1 not in s:
                length=0 
                a=num 
                while a in s:
                    length +=1 
                    a+=1
                longest = max(length, longest)
        return longest 
            