class Solution {
public:
    int DP[501][501];
    int minInsertions(string s) {
        string reverseS = s;
        reverse(reverseS.begin(), reverseS.end());
        memset(DP, -1, sizeof(DP));
        return s.size() - LCS(s, reverseS, s.size(), s.size());
    }
	
    int LCS(string& A, string& B, int m, int n) {
        if(!m || !n) return 0;
        if(DP[m][n] != -1) return DP[m][n];
        
        if(A[m - 1] == B[n - 1]) return DP[m][n] = 1 + LCS(A, B, m - 1, n - 1);
        else return DP[m][n] = max(LCS(A, B, m - 1, n), LCS(A, B, m, n - 1));
    }
};