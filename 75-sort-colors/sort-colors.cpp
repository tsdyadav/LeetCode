class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3]={0,0,0};
        for(int num:nums)
        {
            if(num==0)
            {
                arr[0]++;
            }
            else if(num==1)
            arr[1]++;
            else
            arr[2]++;
        }
        int i=0;
        while(arr[0] >0)
        {
            nums[i++]=0;
            arr[0]--;

        }
          while(arr[1] >0)
        {
            nums[i++]=1;
            arr[1]--;
            
        }
          while(arr[2] >0)
        {
            nums[i++]=2;
            arr[2]--;
            
        }
        
    }
};