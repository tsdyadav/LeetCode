class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1); // store last seen position of each char
        int left = 0, ans = 0;
// a b c b b
// 3 4 5 6 7
        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // If character is already in current window
            if (lastIndex[c] >= left) {
                left = lastIndex[c] + 1; // move left after old position 0 0 0 1 2 3 4 
            }

            lastIndex[c] = right; // update last seen position
            ans = max(ans, right - left + 1); // window length 1 2 3 3 3 3 2 2 
        }

        return ans;
    }
};
