class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> prefix(n);

        // build prefix sum array
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int count = 0;

        // check all subarrays
        for(int start = 0; start < n; start++) {
            for(int end = start; end < n; end++) {

                int sum;
                if(start == 0)
                    sum = prefix[end];
                else
                    sum = prefix[end] - prefix[start - 1];

                if(sum == k)
                    count++;
            }
        }

        return count;
    }
};
