ss Solution:
    def minValueToBalance(self,a,n):
        left_sum=0
        right_sum=0
        
        i=0
        while i<(n//2): 
            left_sum+=a[i]
            i+=1
        for j in range(n//2+1,n): 
            right_sum+=a[j]
        return abs(left_sum-right_sum)
    
