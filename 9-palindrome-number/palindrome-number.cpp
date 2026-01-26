class Solution {
public:
    bool isPalindrome(int x) {
        long int temp=0,rem=0,org=x;
        while(x>0)
        {
            rem=x%10;
            temp=temp*10+rem;
            x=x/10;
        }
        if(temp==org)
        {
            return 1;
        }
        else
        return 0;
    }
};