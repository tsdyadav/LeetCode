class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int thre) {
        //[222] 2,[222] 2,[225] 3, [255] 4, [555] 5,[558] 6
        int winSum=0;
        int count=0;
        int maxSum=0;
        for(int i=0;i<k;i++)
        {
            winSum+=arr[i];
        }
        //[11,13,17] ,[13,17,23],[17,23,29],[23,29,31],[29,31,7],[31,7,5],[7,5,2],[5,2,3]
       
        if(winSum/k>=thre)
        count++;
        for(int i=k;i<arr.size();i++)
        {
            winSum+=arr[i];
            winSum=winSum-arr[i-k];
           
            if(winSum/k>=thre)
            count++;
        }
        return count;
    }
};