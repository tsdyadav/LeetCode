#include <vector>
using namespace std;

class Solution {
public:
    int tribMemo(int n, vector<int>& dp) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        if (dp[n] != -1) return dp[n];
        return dp[n] = tribMemo(n-1, dp) + tribMemo(n-2, dp) + tribMemo(n-3, dp);
    }

    int tribonacci(int n) {
        vector<int> dp(n + 1, -1); 
        return tribMemo(n, dp);
    }
};
