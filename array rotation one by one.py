def array_rotation(arr,n,d):
    for i in range(0,d):
        array_rotation_by_one(arr,n)
def array_rotation_by_one(arr,n):
    temp=arr[0]
    for i in range(0,n-1):

        arr[i]=arr[i+1]
    arr[n-1]=temp
        
    return arr
