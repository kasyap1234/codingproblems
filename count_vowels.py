string=input("")
count=0
vowelist=['a','e','i','o','u']
for i in string:
    if i in vowelist:
        count+=1
print(count)
