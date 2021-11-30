class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>ans;
        string x ="";
      unordered_map<string,int>mp;
        for(auto s:arr){
            mp[s]++;
        }
      for(auto s:arr){
        if(mp[s]==1) ans.push_back(s);
        }
        if(ans.size()>=k) return ans[k-1];
        else 
            return x;
    }
};