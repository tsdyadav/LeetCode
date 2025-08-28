class Solution {
public:
    int findMin(vector<int>& nums) {
           int st=0, end=nums.size()-1;
       int ans=nums[0];
  int mid;
       while(st<=end)
       {
        mid =st+(end-st)/2;
        if(nums[mid]>=nums[0])
            st=mid+1;
        else
        {
            ans=nums[mid];
            end=mid-1;
        }

       } 
       return ans;
    }
};
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int st = 0, end = nums.size() - 1;
//         int ans = nums[0];

//         while (st <= end) {
//             int mid = st + (end - st) / 2;

//             // If mid element is greater than or equal to first,
//             // the min must be on the right
//             if (nums[mid] >= nums[0]) {
//                 st = mid + 1;
//             } else {
//                 ans = nums[mid];  // possible answer
//                 end = mid - 1;
//             }
//         }
//         return ans;
//     }
// };
