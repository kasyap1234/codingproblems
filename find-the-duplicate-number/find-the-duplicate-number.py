class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        i=0
        j=1
        while i<=len(nums)-2:    
            if nums[i]==nums[j]: 
                return nums[j]
            i+=1
            j+=1
            
            
        
        
        