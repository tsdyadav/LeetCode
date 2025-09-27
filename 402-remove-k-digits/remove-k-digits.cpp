class Solution {
public:
     string removeKdigits(string num, int k) {
        string st; // acts as a stack
        for (char c : num) {
            while (!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                --k;
            }
            st.push_back(c);
        }

        // If k still > 0, remove from the end
        while (k > 0 && !st.empty()) {
            st.pop_back();
            --k;
        }

        // Remove leading zeros
        int i = 0;
        while (i < (int)st.size() && st[i] == '0') i++;
        string result = st.substr(i);

        return result.empty() ? "0" : result;
    }
};