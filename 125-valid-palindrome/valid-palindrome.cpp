class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                str+=tolower(s[i]);
            }
        }
        string rev=str;
            reverse(str.begin(),str.end());
        if(str== rev)
            return true;
        else 
            return false;
    }
};