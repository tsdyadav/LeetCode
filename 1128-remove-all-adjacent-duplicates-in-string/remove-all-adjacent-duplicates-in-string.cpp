class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res;
        int n=s.length();
       for(auto c:s){
        if(!res.empty()&&res.back()==c)
            res.pop_back();
        else
        res.push_back(c);
       }
        return res;
    }
};