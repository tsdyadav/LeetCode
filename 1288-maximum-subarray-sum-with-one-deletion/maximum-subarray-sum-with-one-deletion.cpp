class Solution {
public:
    int maximumSum(vector<int>& arr) {
        // int n = arr.size();

        // int dp0 = arr[0];   // No deletion
        // int dp1 = 0;        // One deletion
        // int ans = arr[0];

        // for (int i = 1; i < n; i++) {
        //     dp1 = max(dp1 + arr[i], dp0);   // Delete current OR already deleted earlier
        //     dp0 = max(arr[i], dp0 + arr[i]); // Normal Kadane

        //     ans = max(ans, max(dp0, dp1));
        // }

        // return ans;
        int dp0=arr[0];
        int dp1=0;
        int ans=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            dp1=max(dp1+arr[i],dp0);
            dp0=max(arr[i],dp0+arr[i]);
            ans=max(ans,max(dp1,dp0));

        }
        return ans;
    }
};
