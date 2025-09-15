#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        // last seen positions; initialized to 0
        vector<int> lastS(256, 0);
        vector<int> lastT(256, 0);

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If previous positions don't match, mapping is inconsistent
            if (lastS[c1] != lastT[c2]) return false;

            // Record current position +1 (so 0 remains "not seen")
            lastS[c1] = i + 1;
            lastT[c2] = i + 1;
        }
        return true;
    }
};
