class Solution {
public:
    int minimumDeletions(string s) {
        int bCount=0;
        int ans=0;
        // for(auto& ch : s)
        // {
        //     if(ch=='b')
        //     bCount++;
        // }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            bCount++;
            else
            ans=min(ans+1,bCount);
        }
        return ans;
    }
};