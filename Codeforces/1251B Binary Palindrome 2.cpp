#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        scanf("%d",&n);
        char s[55];
        int odd_size=0,even_size=0,cnt_0=0;
        for(int i=1;i<=n;++i){
            scanf("%s",s);
            int len=strlen(s);
            if(len%2)
                ++odd_size;
            else ++even_size;
            for(int j=0;s[j];++j){
                if(s[j]=='0')++cnt_0;
            }
        }
        if(odd_size) printf("%d\n",n);
        else{
            if(cnt_0%2) printf("%d\n",n-1);
            else printf("%d\n",n);
         }
    }
    return 0;
}

