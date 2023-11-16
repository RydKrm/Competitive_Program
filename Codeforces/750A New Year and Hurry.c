#include<stdio.h>
int main(){

 int m=0,p=0,k=0,i,n,a,count=0;
 scanf("%d %d",&n,&k);

 p = 240 - k;
 for(i=1;i<=n;i++){
    m = m +i*5;
    a = p - m;
    if(a==0){
        printf("%d\n",i);
        break;
    }
    else if(a<0){
        printf("%d\n",i-1);
        break;
    }
    count++;
 }
 if(n==count)
 printf("%d\n",n);

return 0;
}
