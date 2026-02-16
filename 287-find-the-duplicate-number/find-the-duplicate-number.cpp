class Solution {
public:
    int findDuplicate(vector<int>& nums) {

       unordered_set<int>st;
       for(auto &num : nums)
       {
        if(st.find(num) != st.end())
        return num;
        else
        st.insert(num);
        }

       
        return -1;
        
    }
};