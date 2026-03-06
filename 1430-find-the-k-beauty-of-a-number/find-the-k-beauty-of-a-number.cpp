class Solution {
public:
    bool divi(string temp,int num)
    {
        int sn=stoi(temp);
        if(sn==0)
        return false;
        if(num%sn==0)
        return true;
        return false;
    }
    int divisorSubstrings(int num, int k) {
        
        int count=0;
        string temp=to_string(num);
        string window="";
        for(int i=0;i<k;i++)
        {
            window+=temp[i];
        }
        if(divi(window,num))
        count++;
        for(int i=k;i<temp.size();i++)
        {
            window+=temp[i];
            window=window.erase(0,1);
            if(divi(window,num))
             count++;
        }
        return count;
    }
};