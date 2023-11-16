#include<stdio.h>
int main(){

 int a=0,n,k,t,i;
 scanf("%d %d %d",&n,&k,&t);

 for(i=1;i<=t;i++){
    if(i<=k)
        a++;
    if(i>n)
        a--;
    printf("i -> %d = a -> %d \n",i,a);
 }
printf("%d\n",a);

return 0;
}
