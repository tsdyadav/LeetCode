class Solution {
public:
    vector<int> dp;  // declare globally inside class

    int fib(int n) {
        // resize dp for n+1 entries, filled with -1
        if (dp.empty()) dp.resize(n + 1, -1);

        if (n == 0 || n == 1) 
            return n;

        if (dp[n] != -1) 
            return dp[n];

        dp[n] = fib(n - 1) + fib(n - 2);
        return dp[n];
    }
};
