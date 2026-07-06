class Solution {
    public boolean isMonotonic(int[] nums) {
    
        int n=nums.length;
        boolean in=false;
        boolean dec=false;
        for(int i=0;i<n-1;i++){
        if(nums[i] < nums[i+1]){
            in=true;
        }
        if(nums[i]>nums[i+1]){
            dec=true;
        }
        if(in&&dec){
            return false;
        }
        }
      return true;  
    }
}