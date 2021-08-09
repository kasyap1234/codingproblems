class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        #using hashmap or dictionary as is called in python 
       count = {}
        
       for i in nums:
            if i in count:
                count[i] += 1
            else:
                count[i] = 1
            if count[i] > len(nums) // 2:
                return i
    