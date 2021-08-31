#code for calculating the power of a number . 



def power(x,n):
    if n==1:
        return x 
    else : 
        return x * power(x,n-1)

        

