class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        newlist=[]
        for i in nums: 
            if i%2==0: 
                newlist.append(i)
        for j in nums: 
            if j%2!=0: 
                newlist.append(j)
        return newlist
    