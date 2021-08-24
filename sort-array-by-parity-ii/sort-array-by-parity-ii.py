class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        evenlist=[]
        oddlist=[]
        finallist=[]
        for k in nums: 
            if k%2==0: 
                evenlist.append(k)
            else: 
                oddlist.append(k)
        for i in range(len(nums)//2): 
            finallist.append(evenlist[i])
            finallist.append(oddlist[i])
        return finallist
    
            
            
        
