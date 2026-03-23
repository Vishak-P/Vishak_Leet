int findUnsortedSubarray(int* nums, int numsSize) {
    int l=0,r=numsSize-1;
    while(l<numsSize-1&& nums[l]<=nums[l+1]){
        l++;
    }
    if(l==numsSize-1) return 0;
    while(r>0 && nums[r]>=nums[r-1]){
        r--;
    }

    int min=nums[l],max=nums[r];
    for(int i=l;i<=r;i++){
        if(nums[i]<min) min=nums[i];
        if(nums[i]>max) max=nums[i];
    }
    while(l>0 && min<nums[l-1])l--;
      while(r<numsSize-1 && max>nums[r+1])r++;
    return r-l+1;
}