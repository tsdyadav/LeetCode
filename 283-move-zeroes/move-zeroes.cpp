class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int j=0,k=0;
     //j--> 0 1 2
     for(int i=0;i<nums.size();i++)
     {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[j]);
            j++;   
        }

     } 
     
    }
};