int max(int a,int b){
    return a>b?a:b;
}
int lengthOfLongestSubstring(char* s) {
    int n=strlen(s);
    int vis[128]={0};
    int left =0,res=0;
        for(int r=0;r<n;r++){
            if(vis[s[r]]>left){
                left=vis[s[r]];
            }
                res=max(res,r-left+1);
                vis[s[r]]=r+1;
            }
    return res;
}