class Solution {
public:
int rolesqure(int n)
{
    int sum=0;
    while(n!=0)
    {
        int temp=n%10;
        sum+=temp*temp;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        unordered_set<int> uni;
        while(n!=1)
        {
            if(uni.count(n)) return false;
            uni.insert(n);
            n=rolesqure(n);
        }
        return true;
        
    }
};