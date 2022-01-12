class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>ans(n+1,0); 
        if(n==1){
            return 1 ; 
        }
        for(auto x : trust){
            ans[x[0]]--; 
            ans[x[1]]++; }
            for (int i=0;i<ans.size();i++){
                if(ans[i]==n-1){
                    return i; 
                }
            }
            return -1; 
        
    }
};