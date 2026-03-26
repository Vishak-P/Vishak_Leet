int firstUniqChar(char* s) {
    int n=strlen(s);
    int f[26]={0};
    int a=s[0];
    int ans=0;
    for(int i=0;s[i]!='\0';i++){
        f[s[i]-'a']++;
    }
    for(int i=0;s[i]!='\0';i++){
        if(f[s[i]-'a']==1) return i;
    }
    return -1;
}