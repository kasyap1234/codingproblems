class Solution:
    def isValid(self, s: str) -> bool:
        
        store = []
        opening = "({["
        closing = ")}]"
        
        for char in s:
            if char in opening:
                store.append(char)
            elif char in closing:
                if len(store) == 0:
                    return False
                elif closing.index(char) != opening.index(store.pop()):
                    return False 
        
        return len(store) == 0