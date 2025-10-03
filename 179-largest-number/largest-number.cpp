class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Convert each int to string
        vector<string> arr;
        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        // Custom sort
        sort(arr.begin(), arr.end(), [](string &a, string &b) {
            return a + b > b + a;  // key logic
        });

        // If the largest number is "0", return "0"
        if (arr[0] == "0") return "0";

        // Build answer
        string ans;
        for (string &s : arr) {
            ans += s;
        }

        return ans;
    }
};
