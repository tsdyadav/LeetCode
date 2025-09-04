class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n - 1;

        // skip trailing spaces
        while (i >= 0 && s[i] == ' ') i--;

        int count = 0;
        // count last word length
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
