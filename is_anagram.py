#is anagram or not program 
#in python 

def is_anagram(stringx=input("enter the first string"),stringy=input("enter the second string")):
    if len(stringx)==len(stringy):
        for i in range(len(stringy)):
            for j in range(len(stringx)):
                if stringy[i]==stringx[j]:
                    return "is an anagram "
                

    else:
        return "not an anagram "
print(is_anagram("silent","listen"))
