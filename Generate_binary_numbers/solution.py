def generate(N):
    # code here
    ans=[]
    i=1; 
    while i<=N: 
        ans.append(decimalToBinary(i))
        i+=1
    return ans
    
    
    
    
    
def decimalToBinary(n):
    return bin(n).replace("0b", "")
