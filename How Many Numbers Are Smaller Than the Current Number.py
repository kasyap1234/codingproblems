class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count=0
        result=[]
        for i in range(len(nums)): 
            max=nums[i]
            for j in range(len(nums)): 
                if nums[i]>nums[j]:
                    
                    count+=1
            result.append(count)
            count=0
        return result 
    
    
        
