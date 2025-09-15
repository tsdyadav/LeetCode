class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
       unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++)
        freq[s[i]]++;
        for (char c : t) {
            if (freq.find(c) == freq.end()) return false;
            freq[c]--;
            if (freq[c] < 0) return false;  // more of c in t than in s
        }
        return true;
       
    }
};