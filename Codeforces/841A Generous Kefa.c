#include<stdio.h>
int main(){

 int i,j,s=0,n,k,ary[100],count=0;
 char str[100];

 scanf("%d %d",&n,&k);
 scanf("%s",str);


 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(str[i]==str[j]){
            s++;
        }
    }
    ary[i]=s;   //printf("array = %d\n",ary[i]);
    s=0;
 }

 for(i=0;i<n;i++){
    if(ary[i]>k){
        count++;
    }
 }

 if(count==0){
    printf("YES\n");
 }
 else
    printf("NO\n");

return 0;
}

