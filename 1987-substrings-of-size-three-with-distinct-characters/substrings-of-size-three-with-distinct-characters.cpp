class Solution {
public:
bool checkuniuq(string s)
{
    sort(s.begin(),s.end());
    if(s[0]==s[1])
    return false;
    else 
    {
        if(s[0]==s[2])
        {
            return false;
        }
        else
        {
            if(s[1]==s[2])
            return false;
            else 
            return true;
        }
        return true;
    }
    return true;
}
    int countGoodSubstrings(string s) {
        int count=0;
        string window="";
        for(int i=0;i<3;i++)
        {
            window+=s[i];
        }
        //check window has unique or not
        if(checkuniuq(window))
        count++;
        for(int i=3;i<s.size();i++)
        {
            window+=s[i]; // xyz // yzza
            window=window.erase(0,1);
            //check uniq
            if(checkuniuq(window))
            count++;
        }
        return count;
    }
};