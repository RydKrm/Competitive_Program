#include<stdio.h>
int main(){

 int i,k=0,n,w,sum=0;
 scanf("%d %d %d",&k,&n,&w);

 for(i=1;i<=w;i++){
    sum=sum + i*k;
 }
 // printf("%d\n",sum);
 sum = sum - n;
if(sum>0){
 printf("%d\n",sum);
}else
  printf("0\n");
return 0;
}
