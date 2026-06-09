class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        a=1
        for num in nums:
            a*=num
        b=[0]*(len(nums))
        for i in range(len(nums)):
            if nums[i] != 0: 
                b[i]=int(a/nums[i])

            else:

                pro=1
                for j in range(len(nums)):
                    if i != j:
                        pro*=nums[j]
                b[i]=pro
                
        return b