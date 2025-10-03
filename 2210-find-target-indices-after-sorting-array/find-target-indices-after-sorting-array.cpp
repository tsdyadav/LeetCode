class Solution {
    int left(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        int temp = -1;  // initialize with -1
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                temp = mid;
                end = mid - 1;  // move left
            } 
            else if (nums[mid] < target) {
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return temp;
    }

    int right(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        int temp = -1;  // initialize with -1
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                temp = mid;
                st = mid + 1;  // move right
            } 
            else if (nums[mid] < target) {
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return temp;
    }

public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());  // sort first
        int l = left(nums, target);
        int r = right(nums, target);
        vector<int> ans;

        // collect all indices from l to r
        for (int i = l; i <= r && l != -1; i++) {
            ans.push_back(i);
        }
        return ans;
    }
};
