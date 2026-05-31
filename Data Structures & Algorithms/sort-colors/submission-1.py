class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        b=[0]*3
        for i in nums:
            b[i]+=1
        j=0
        for i in range(3):
            while b[i]:
                nums[j]=i
                b[i]-=1
                j+=1
        

            