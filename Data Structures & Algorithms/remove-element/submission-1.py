class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n=len(nums)
        ind=0
        for i in range(n):
            if (nums[i]!=val):
                nums[ind]=nums[i]
                ind +=1
        return ind

