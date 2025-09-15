#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mapST;  // s -> t
        unordered_map<char, char> mapTS;  // t -> s

        for (size_t i = 0; i < s.size(); ++i) {
            char c1 = s[i];
            char c2 = t[i];

            // Check existing mapping s->t
            if (mapST.count(c1) && mapST[c1] != c2) return false;
            // Check existing mapping t->s
            if (mapTS.count(c2) && mapTS[c2] != c1) return false;

            // Record new mappings
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }
      return true;
    }
};
