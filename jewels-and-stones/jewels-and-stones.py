class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        j=[]
        count =0
        
        for i in jewels: 
            j.append(i)
        for s in stones: 
            if s in j: 
                count+=1
        return count 
  
    