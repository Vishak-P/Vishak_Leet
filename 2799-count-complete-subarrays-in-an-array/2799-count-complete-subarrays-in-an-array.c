int atmost(int nums[],int n,int k){
    int freq[100001]={0};
    int l=0,r=0;
    int ans=0;
    int cnt=0;
    while(r<n){
        if(freq[nums[r]]==0) cnt++;
        freq[nums[r]]++;
        while(cnt>k){
            freq[nums[l]]--;
            if(freq[nums[l]]==0) cnt--;
            l++;
           
        }
        ans+=(r-l+1);
            r++;
    }
    return ans;
}
int countCompleteSubarrays(int* nums, int numsSize) {
    int seen[100001]={0};
    int d=0;
    for(int i=0;i<numsSize;i++){
         if(seen[nums[i]]==0) {
            d++;
         seen[nums[i]]++;
    }
    }
    return atmost(nums,numsSize,d)-atmost(nums,numsSize,d-1);
}