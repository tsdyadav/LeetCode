class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int>ans(n+m);
        merge(begin(nums1),end(nums1),begin(nums2),end(nums2),ans.begin());
       sort(ans.begin(),ans.end());
        int size=ans.size();
        if(size%2==0)
        {
           int t=(size/2)-1;
            double temp=ans[t]+ans[t+1];
            return temp/2;
        }
        else
        {
            double temp=ans[size/2];
            return temp;
        } 

    }
};