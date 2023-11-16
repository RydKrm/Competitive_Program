#include<stdio.h>
int main(){

 int ary[1000],t,n,i,a;
 scanf("%d %d",&n,&t);

 for(i=0;i<n;i++){
    scanf("%d",&ary[i]);
 }

 for(i=0;i<n;i++){
    a=86400-ary[i];
    t=t-a;
    if(t<=0){
        printf("%d\n",i+1);
        break;
    }
 }


return 0;
}
