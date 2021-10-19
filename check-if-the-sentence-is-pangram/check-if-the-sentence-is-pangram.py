class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        arr=[]
        for i in range(26): 
            arr.append(0)
        for j in range(len(sentence)): 
            if sentence[j]: 
                arr[ord(sentence[j])-97]+=1
        print(arr)
        for k in arr: 
            if k==0: 
                return False
        return True
    