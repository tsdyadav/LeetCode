class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back(start + 2 * i);
        }

        int ans = 0;
        for (auto num : arr)
            ans ^= num;

        return ans;
    }
};
