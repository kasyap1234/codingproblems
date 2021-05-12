
def coinchange(totalnumber,coins): 
	N=totalnumber
	coins.sort()
	index=len(coins)-1
	while totalnumber>0: 
		coinvalue=coins[index]
		if N>=coinvalue: 
			print(coinvalue)
			N=N-coinvalue 
		if N<coinvalue: 
			index-=1
