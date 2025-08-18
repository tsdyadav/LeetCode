class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n =cost.size();
        int a=0;
        int b=0;
        for(int i=2;i<=n;i++)
        {
            int temp=min(b+cost[i-1],a+cost[i-2]);
            a=b;
            b=temp;
        }
        return b;

    }
};