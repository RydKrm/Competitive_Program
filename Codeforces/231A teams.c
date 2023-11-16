#include<stdio.h>
int main(){
 int array[1000][1000],n,i,j,sum=0,count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        scanf("%d",&array[i][j]);
    }
 }
 for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        if(array[i][j]==1){
            count++;
        }
    }
    if(count>1){
        sum++;
    }
    count=0;
 }
 printf("%d\n",sum);
return 0;
}
