class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;

        // Merge alternately while both have characters
        while (i < word1.size() && j < word2.size()) {
            ans += word1[i++];
            ans += word2[j++];
        }

        // Add remaining characters of word1
        while (i < word1.size()) {
            ans += word1[i++];
        }

        // Add remaining characters of word2
        while (j < word2.size()) {
            ans += word2[j++];
        }

        return ans;
    }
};
