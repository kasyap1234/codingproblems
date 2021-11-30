class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) {
		unordered_map<int,int> mp;

		for(int i = 0; i<arr.size(); i++){
			mp[arr[i]]++;
		}

		unordered_map<int,int> ans;

		for(auto i:mp){
			if(ans[i.second]==1){
				return false;
			}else{
				ans[i.second]++;
			}
		}
		return true;
	}
};