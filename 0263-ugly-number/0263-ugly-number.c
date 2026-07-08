bool isUgly(int n) {
    if(n<=0) return false;
    int fact[]={2,3,5};
    for(int i=0;i<3;i++){
        while(n%fact[i]==0){
            n/=fact[i];
        }
    }
    return n==1;
}