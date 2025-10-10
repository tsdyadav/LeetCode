class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int diff = 0;
        for (auto num : nums)
            diff ^= num;          // XOR of all numbers

        diff &= -diff;            // isolate rightmost set bit safely (unsigned)

        int a = 0, b = 0;
        for (auto num : nums) {
            if (num & diff)
                a ^= num;
            else
                b ^= num;
        }
        return {a, b};
    }
};
