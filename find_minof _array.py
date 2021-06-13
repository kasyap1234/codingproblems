def findsmallest(thearray):
    smallest=thearray[0]
    for i in range(1,len(thearrray)-1):
        if smallest>thearray[i]:
            smallest=thearray[i]
    return smallest
    
        
