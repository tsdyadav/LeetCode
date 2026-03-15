class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        stack<int>st;
        for(int i=0;i<temperatures.size();i++)
        {// 0 1 2
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                int idx=st.top();
                 st.pop();
                ans[idx]=i-idx;
            }
            st.push(i); // 2 3 4 5 
        }
        return ans;
        
        

    }
};