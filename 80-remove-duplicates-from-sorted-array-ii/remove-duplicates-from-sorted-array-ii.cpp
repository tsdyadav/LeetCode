class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> result;

        for (int x : nums) {
            if (freq[x] < 2) {      // allow at most 2 copies
                result.push_back(x);
                freq[x]++;          // increase count
            }
        }

        // copy back into nums
        for (int i = 0; i < result.size(); i++) {
            nums[i] = result[i];
        }

        return result.size();
    }
};
