class Solution {
public:
  string intToRoman(int num) {
  
    static const vector<pair<int,string>> val = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100,  "C"}, {90,  "XC"}, {50,  "L"}, {40,  "XL"},
        {10,   "X"}, {9,   "IX"}, {5,   "V"}, {4,   "IV"},
        {1,    "I"}
    };

    string res;
    for (const auto &p : val) {
        int v = p.first;
        const string &s = p.second;
        if (num == 0) break;
        int count = num / v;
        if (count) {
            // append symbol 'count' times
            for (int i = 0; i < count; ++i) res += s;
            num -= count * v;
        }
    }
    return res;
}
};