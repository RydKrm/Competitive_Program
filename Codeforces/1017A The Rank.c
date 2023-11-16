#include<stdio.h>
 int main(){
 int i,j,n,sum=0,array[1000][10],array2[1000],count=1;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    for(j=0;j<4;j++){
        scanf("%d",&array[i][j]);
    }
 }
 for(i=0;i<n;i++){
    for(j=0;j<4;j++){
        sum=sum+array[i][j];
    }
    array2[i]=sum;
    sum=0;
 }
 for(i=0;i<n;i++){
    if(array2[0]<array2[i]){
        count++;
    }
 }
 printf("%d\n",count);
  return 0;
 }
