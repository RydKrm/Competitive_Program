#include<stdio.h>
int main(){

 int a=0,n,m,k,t,i;
 scanf("%d %d %d",&n,&k,&t);

 //m=n+n/2;

 if(t>=k && t<=n){
    printf("%d\n",k);
 }
 else if(t>k){
 for(i=1;i<=k;i++){
    if(i<=k)
        a++;
    //if(i>n)
    //    a--;
    //printf("i -> %d = a -> %d \n",i,a);
 }
 printf("%d\n",a);
 }
 else if(t<n){
 for(i=n;i<=k;i++){
    if(i<=k)
        a--;
    //if(i>n)
    //    a--;
    //printf("i -> %d = a -> %d \n",i,a);
 }
 printf("%d\n",a);
 }
return 0;
}

