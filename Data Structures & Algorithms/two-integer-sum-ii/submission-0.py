class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        hsmp=defaultdict(int)
        for i in range (len(numbers)):
            tmp=target - numbers[i]
            if hsmp[tmp] : 
                return [hsmp[tmp],i+1]
            hsmp[numbers[i]] = i+1 
        return []