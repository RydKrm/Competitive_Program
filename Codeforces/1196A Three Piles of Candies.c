#include<stdio.h>
int main(){

 long long int i,j,array[1000][10],n,sum=0;
 scanf("%lld",&n);
 for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        scanf("%lld",&array[i][j]);
    }
 }
 for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        sum=sum+array[i][j];
       //printf("%lld\n",sum);
    }
    sum=sum/2;
    printf("%lld\n",sum);
    sum=0;
 }
return 0;
}
