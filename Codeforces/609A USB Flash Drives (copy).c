#include<stdio.h>
int main(){

 int array[1000],i,j,n,m,count=0,sum=0,temp=0;

 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++){
    scanf("%d",&array[i]);
 }

 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    if(array[i]<array[j]){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
  }
 }

 for(i=0;i<n;i++){
    sum=sum + array[i];
    count++;
    if(sum>=m){
    break;
    }
 }

 printf("%d\n",count);

return 0;
}
