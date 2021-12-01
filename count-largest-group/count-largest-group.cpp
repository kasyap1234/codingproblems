class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> count(37, 0);
        for(int i=1; i<=n; i++){
            int temp = i;
            int sum = 0;
            while(temp > 0){
                sum += temp%10;
                temp /= 10;
            }
            count[sum]++;
        }
        int ans = 0, maxi = INT_MIN;
        for(int i: count){
            if(i > maxi){
                maxi = i;
                ans = 1;
            }
            else if(i == maxi){
                ans++;
            }
        }
        return ans;
    }
};