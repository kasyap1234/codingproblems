a=[-2,-4,-5,-6,3,8,10,-1,12,-3,-4,12]
def kadanealgorithm(array): 
	cur_sum=0
	max_sum=0
	for i in range(len(a)): 
		cur_sum+=a[i]
	if cur_sum>max_sum: 
		max_sum=cur_sum
	if cur_sum<0:
		cur_sum=0
	return max_sum 
