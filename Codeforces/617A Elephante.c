#include<stdio.h>
int main(){

 int x,a,b,c,d,e,f,g,h,i,j,sum=0;
 scanf("%d",&x);

 a=x/5;
 b=x%5;
 c=b%4;
 d=b/4;
 e=c/3;
 f=c%3;
 g=f%2;
 h=f/2;
 i=g%1;
 j=g/1;

 sum = a+d+e+h+j;

 printf("%d\n",sum);


return 0;
}
