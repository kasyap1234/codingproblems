class Solution:
    def checkString(self, s: str) -> bool:
        acount=0
        for   i in range(len(s)):
            if s[i]=="a": 
                acount+=1
        i=0
        while acount: 
            if s[i]!="a": 
                return False
            acount-=1 
            i+=1
        return True
        