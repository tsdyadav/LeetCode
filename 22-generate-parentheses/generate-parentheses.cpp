class Solution {
public:
    void parethesis(int n, int l,int r,vector<string>&ans,string &temp)
    {
        if(l+r==2*n)
        {
            ans.push_back(temp);
            return ;
        }
        if(l<n)
        {
            temp.push_back('(');
            parethesis(n,l+1,r,ans,temp);
            temp.pop_back();
        }
       if(r<l)
        {
            temp.push_back(')');
            parethesis(n,l,r+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int l=0;
        int r=0;
        string temp;
        vector<string>ans;
         parethesis(n,l,r,ans,temp);
        return ans;
    }
};