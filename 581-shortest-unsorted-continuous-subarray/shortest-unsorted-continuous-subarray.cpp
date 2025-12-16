class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;

        // Step 1: find first disorder from left
        while (l < n - 1 && nums[l] <= nums[l + 1]) {
            l++;
        }
        if (l == n - 1) return 0; // already sorted

        // Step 2: find first disorder from right
        while (r > 0 && nums[r] >= nums[r - 1]) {
            r--;
        }

        // Step 3: find min and max in unsorted part
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = l; i <= r; i++) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }

        // Step 4: expand left boundary
        while (l > 0 && nums[l - 1] > mn) {
            l--;
        }

        // Step 5: expand right boundary
        while (r < n - 1 && nums[r + 1] < mx) {
            r++;
        }

        return r - l + 1;
    }
};
