#include<stdio.h>
int main(){

 int n,i,count=0,sum=0;
 scanf("%d",&n);

 for(i=1;i<=n;i++){
    sum=sum+i; // printf("sum = %d\n",sum);
    if(sum==n){
        count++;  //printf("count = %d\n",count);
        break;
    }
 }

 if(count>0){
    printf("YES\n");
 }
 else
 printf("NO\n");

return 0;
}
