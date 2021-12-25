class Solution:
    def solve(self, nums):
        nums.sort()
        value =-1
        i=0
        flag=1
        j=len(nums)-1
        for k in range(len(nums)): 
            if nums[k]==0: 
                flag=0
                value =0

        if flag==0: 
            return 0
            
        while i<j: 
            if nums[i]+ nums[j]==0: 
                value= max(nums[i],nums[j])
            elif nums[i]+ nums[j]>0: 
                j-=1
            else: 
                i+=1
        return value

