class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        
        """
        nums3=[]
        i=0
        j=0
        k=0
        while i<m and j<n: 
            if nums1[i]<nums2[j]: 
                nums3[k]=nums1[i]
                k+=1
                i+=1
            else: 
                nums3[k]=nums2[j]
                k+=1
                j+=1
        while i<m: 
            nums3[k]=nums1[i]
            k+=1
            i+=1
        while j<n: 
            nums3[k]=nums2[j]
            k+=1
            j+=1
            
