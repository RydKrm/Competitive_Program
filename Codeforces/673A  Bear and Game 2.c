#include<stdio.h>
int main(){

 int ary[100],i,s,n,count=0,j;

 scanf("%d",&n);
 for(i=1;i<=n;i++){
    scanf("%d",&ary[i]);
 }

 for(i=1;i<=90;i++){
    for(j=0;j<n;j++){
        if(ary[j]==i){
            count=0;
            break;
        } else{
        count++;   printf("count = %d\n",count);
        }
    }
         printf("i = %d\n",i);
    if(count>15){
        printf("%d\n",i);
        break;
    }
 }

return 0;
}
