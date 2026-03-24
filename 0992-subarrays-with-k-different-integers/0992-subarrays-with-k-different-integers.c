int atmost(int* nums, int numsSize, int k){
    int l=0,r=0;
    int ans=0;
    int freq[100001]={0};
    int cnt=0;
    while(r<numsSize){
    if(freq[nums[r]]==0) cnt++;
    freq[nums[r]]++;
    while(cnt>k){
        freq[nums[l]]--;
        if(freq[nums[l]]==0){
           cnt--;
        }
        l++;
    }
    ans+=(r-l+1);
    r++;
    }
    return ans;
}
int subarraysWithKDistinct(int* nums, int numsSize, int k) {
   return atmost(nums,numsSize,k)-atmost(nums,numsSize,k-1);
}