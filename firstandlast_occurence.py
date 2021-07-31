def find(arr,n,x):
    start=0
    end=n-1
    result=-1
    res=-1
    mid=start+(end-start)//2
    
    while start<end: 
        if arr[mid]==x: 
            result=mid
            end=mid-1
        elif arr[mid]>x: 
            end=mid-1
        else: 
            start=mid+1
    while start<end: 
        if arr[mid]==x: 
            res=mid
            start=mid+1
        elif arr[mid]>x: 
            end=mid-1
        else: 
            start=mid+1
