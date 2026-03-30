/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *ans=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i]*nums[i];
    }
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize-i-1;j++){
            if(ans[j]>ans[j+1]){
           int temp=ans[j];
           ans[j]=ans[j+1];
           ans[j+1]=temp;
        }
    }
    }
    return ans;
}