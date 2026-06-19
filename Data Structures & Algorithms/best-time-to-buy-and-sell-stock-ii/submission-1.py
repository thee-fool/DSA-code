class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        dp = {} 

        def recur(day,own):
            if day == len( prices):
                return 0 
            if (day,own) in dp :
                return dp[(day,own)]
            result=recur(day+1,own)
            if own :
                result = max(result, prices[day] + recur(day+1,False))
            else : 
                result = max ( result, - prices[day] + recur(day+1,True))
            
            dp[(day,own)] = result
            return result 


        return recur(0,False)