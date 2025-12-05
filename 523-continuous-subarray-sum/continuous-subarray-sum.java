class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        HashMap<Integer,Integer> map=new HashMap<>();

        int rem=0;
        int sum=0;
        map.put(sum,-1);

        for(int i=0;i<nums.length;i++){
           rem=(rem+nums[i])%k;

           if(map.containsKey(rem)){
            if(i-map.get(rem)>1){ return true;}
           }
        else{
            map.put(rem,i);
         }
        }
        return false;
    }
}