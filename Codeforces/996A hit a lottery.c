#include<stdio.h>
int main(){
  int sum,a,b,c,d,n,e,f,g,h,i,j;
  scanf("%d",&n);
  a=n%100;
  b=n/100;
  c=a%20;
  d=a/20;
  e=c%10;
  f=c/10;
  g=e%5;
  i=e/5;
  j=g%1;
  h=g/1;

  sum=b+d+i+h+f;

  printf("%d\n",sum);


return 0;
}
