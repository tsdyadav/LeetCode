class Solution {
public:
    int squre(int n)
    {
        int sum=0;
        while(n)
        {
            int temp=n%10;
            sum+=temp*temp;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
       unordered_set<int>uniq;
       while(n!=1)
       {
        if(uniq.count(n)) return false;
        uniq.insert(n);
        n=squre(n);
       } 
       return true;
    }
};