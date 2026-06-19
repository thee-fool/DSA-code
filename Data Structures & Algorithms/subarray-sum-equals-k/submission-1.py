class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count =0 
        cur_sum = 0 
        prefixsum = defaultdict(int)
        prefixsum[0]=1
        for i in nums :
            cur_sum += i 
            value_to_k = cur_sum - k 
            
            count += prefixsum.get(value_to_k,0)
            prefixsum[cur_sum]=1+prefixsum.get(cur_sum,0)
        return count