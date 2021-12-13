
int digits(int num){
    int cou=0; 
    while(num>0){
     num=num/10; 
     cou+=1; 
    }
    return cou; 
    
}



int solve(vector<int>& nums) {
    int count=0; 
    for(int i=0;i<nums.size();i++){
        if(digits(nums[i])%2!=0){
            count+=1; 
        }
    }
    return count; 
    
}
