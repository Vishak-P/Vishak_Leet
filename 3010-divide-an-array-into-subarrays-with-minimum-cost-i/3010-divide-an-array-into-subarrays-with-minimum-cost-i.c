int minimumCost(int* nums, int numsSize) {
    int x1=100,x2=100;
    for(int i=1;i<numsSize;i++){
        int x=nums[i];
        if(x<x1){
            x2=x1;
            x1=x;
        }
        else if(x<x2){
            x2=x;
        }
    }
    return nums[0]+x1+x2;
}