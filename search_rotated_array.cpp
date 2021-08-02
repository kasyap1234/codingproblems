class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0; 
        int high=nums.size()-1; 
        int mid=low + (high - low)/2; 
        // out of the two parts in the array only one part will be sorted and the other will remain unsorted so as it is easy to implement binary search on the part which is sorted (binary search works for sorted array) , first we check left and the right subarray whether they are sorted or not ; if left  subarray is sorted we check if target is greater than nums[low] and lower than nums[mid] ; if not we are sure that the element lies in the right subarray ; thereby eliminating the whole left subarray; if we find that the left subarray is not sorted then it means that the right subarray will be sorted ; we will follow a similar procedure for checking if the right subaray has that element. 
        while(low<=high){
            if(nums[mid]==target){
                return mid; 
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target){
                    high=mid-1; 
                    
                }
                else{
                    low=mid+1; 
                    
                }
            }
              else  {
                    if(nums[mid]<=target && nums[high]>=target){
                        low=mid+1; 
                    }
                    else{
                        high=mid-1; 
                    }
              }
                }
         return -1; 
            }
       
            
        
        
   
};
