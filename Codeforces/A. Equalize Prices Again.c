#include<stdio.h>
int main(){

 int i,j,q,n,sum=0,p=0,array[1000];

 scanf("%d",&q);

 for(i=0;i<q;i++){
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&array[j]);
        sum=sum+array[j];
    }
    p=sum/n;

    if(sum%n==0){
    printf("%d\n",p);
    }
    else
        printf("%d\n",p+1);

    sum=0;
    p=0;
 }


return 0;
}
