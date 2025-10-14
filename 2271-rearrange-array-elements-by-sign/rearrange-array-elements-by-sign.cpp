class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int> ans(nums.size());
      int pos=0,neg=1;
      for(int num : nums)
      {
        if(num>=0)
        {
        ans[pos]=num;
        pos=pos+2;
        }
        else
        {
            ans[neg]=num;
         neg=neg+2;
        }
        
      } 

      return ans; 
    }
};