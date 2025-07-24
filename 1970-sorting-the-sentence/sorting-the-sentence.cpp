class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10); // index from 1 to 9
        string temp;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                words[pos] = temp;
                temp.clear();
            } else {
                temp += s[i];
            }
        }

        // Don't forget the last word
        int pos = temp.back() - '0';
        temp.pop_back();
        words[pos] = temp;

        // Construct result
        string result;
        for (int i = 1; i <= 9; ++i) {
            if (!words[i].empty()) {
                if (!result.empty()) result += " ";
                result += words[i];
            }
        }

        return result;
    }
};
