#include<stdio.h>
int main(){

 int r,g,b,rs=0,gs=0,bs=0,k,n,sum=0;
 scanf("%d %d",&n,&k);
// printf("k = %d\n",k);
 r=(n*2);  //printf("r = %d\n",r);
 rs=r/k;  // printf("rs = %d\n",rs);
 if(k*rs!=r){
    rs++;// printf("rs = %d\n",rs);
 }
// printf("rs = %d\n",rs);
 g=n*5;
 gs=g/k;
 if(k*gs!=g){
    gs++;
 }
 //printf("gs = %d\n",gs);
 b=n*8;
 bs=b/k;
 if(k*bs!=b){
    bs++;
 }
 // printf("bs = %d\n",bs);

 sum=rs+gs+bs;
 printf("%d\n",sum);

 return 0;
 }
