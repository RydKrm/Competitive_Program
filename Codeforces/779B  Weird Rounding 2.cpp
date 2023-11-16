#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
    char str[100];
    int k,i,j,l,cnt=0,dn=0;
    scanf("%s %d",str,&k);
    l=strlen(str);
    for(i=l-1;i>0;i--){
        if(str[i]=='0') cnt++;
        else dn++;
        if(cnt==k)
            break;
    }
    if(cnt==k)
        cout<<dn<<endl;
    else
        cout<<l-1<<endl;
    return 0;
}
