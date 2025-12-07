class Solution {
public:
    bool isPerfectSquare(int num) {
        int st=0,end=num/2;
        if(num==1) return 1;
        while(st<=end)
        {
            long long mid=st+(end-st)/2;
            if(mid*mid==num)
            return 1;
            else if(mid*mid<num)
            st=mid+1;
            else
            end=mid-1;

        }
        return 0;
    }
};