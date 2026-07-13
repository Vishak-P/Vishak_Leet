class Solution {
    public int missingNumber(int[] nums) {
        int m=nums.length;
        int ex=0;
        for(int i=0;i<=m;i++){
            ex+=i;
        }
        int ac=0;
        for(int i=0;i<m;i++){
            ac+=nums[i];
        }
        return ex-ac;
    }
}