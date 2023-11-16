#include<stdio.h>
int main(){
 int array[100],array1[100],i,j,n,count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&array[i]);
 }
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            count++;
        if((i+1)==array[j]){
            break;
        }
    }
    array1[i]=count;
    count=0;
 }
 for(i=0;i<n;i++){
    printf("%d ",array1[i]);
 }
return 0;
}
