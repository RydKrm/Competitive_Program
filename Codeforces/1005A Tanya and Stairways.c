#include<stdio.h>
int main(){
 int array[1000],array2[1000],n,i,count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&array[i]);
 }

 for(i=0;i<n;i++){
    if(array[i] != array[i+1]-1){
        count++;
        array2[count-1]=array[i];
    }
 }

 printf("%d\n",count);
 for(i=0;i<count;i++){
    printf("%d ",array2[i]);
 }

return 0;
}
