class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //for first slid
        int maxlen=INT_MIN;
        int count=0;
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            count+=1;
            while(count>k)
            {
                if(nums[i]==0)
                {count-=1;
                i++;}
                else
                i+=1;
                
            }
            maxlen=max(maxlen,j-i+1);
            
            

        }
        return maxlen;
    }
};