#include<stdio.h>
int main(){

 int a,b,n,c;

 scanf("%d",&n);

 if(n%2==0){

    b=n/2;
    printf("%d %d\n",b-1,b+1);
 }
 else {
    a=n/2;
    printf("%d %d\n",a,a+1);
 }
return 0;
}
