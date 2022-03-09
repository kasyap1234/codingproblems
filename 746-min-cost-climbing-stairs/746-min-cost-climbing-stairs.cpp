class Solution {
public:
    
        int minCostClimbingStairs(vector<int>& cost) {
	vector<int> dp(size(cost)); // dp[i] = cost to reach end from ith step 
	return min(solve(cost, dp, 0), solve(cost, dp, 1));
}
int solve(vector<int>& cost, vector<int>& dp, int i) {
	if(i >= size(cost)) return 0;
	if(dp[i]) return dp[i];  // if already calculated, directly return stored minimum cost
	return dp[i] = cost[i] + min(solve(cost, dp, i + 1), solve(cost, dp, i + 2)); // same as above, just store in dp[i] before returning
}
    
};