def count_consonants():
    list123=['a','e','i','o','u']
    dstring=input(" enter the string ")
    index=0
    for i in dstring:
        if  i in list123:
            index+=0
        else:
            index+=1

    return index 

print(count_consonants())