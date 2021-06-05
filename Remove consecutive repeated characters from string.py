s=input("")
def recursive_remove(s): 
  if len(s)==1  or len(s)==0: 
    return s
  else: 
    if s[0]==s[1]: 
      return recursive_remove(s[1:])
    else: 
      return s[0] + recursive_remove(s[1:])
print(recursive_remove(s))
