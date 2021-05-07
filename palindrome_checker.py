def check_palindrome():
    string=input(" ")

    start=0

    length=len(string)

    while(start<length):
        start+=1
        length-=1
        if string[start]==string[length]:
            return "is palindrome"
        else:
            return "not a palindrome"

print(check_palindrome())
#use it to check the whether a string is palindrome or not . 
