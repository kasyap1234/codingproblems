def count_coins(cents):
    coins=[25,20,10,5,1]
    count=0
    for coin in coins:
        while cents>=coin:
            cents=cents-coin
            count+=1
    return count
print(count_coins(1000))
