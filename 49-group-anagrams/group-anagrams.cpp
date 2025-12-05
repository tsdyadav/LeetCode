class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>fr;


        for(string s:strs)
        {
            string key=s;

            sort(key.begin(),key.end());
            fr[key].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto &p:fr)
        {
            ans.push_back(p.second);
        }
        return ans;

    }
};