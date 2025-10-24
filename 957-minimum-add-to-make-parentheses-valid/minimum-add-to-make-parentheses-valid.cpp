class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
       stack<char> st;
       for(char ch : s)
       {
        if(ch=='(')
        {
            st.push(ch);
        }
        else if(st.size()>0 && st.top()=='(')
        {
            st.pop();
        }
        else
        {
            count++;
        }
       }
       return count+st.size();
    }
};