#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
 long long int n,i,sum=0,b;
 scanf("%lld",&n);
 for(i=0;i<n;i++){
 scanf("%lld",&b);
 sum+=b;
 }
  if(sum%n==0) printf("%lld\n",n);
  else printf("%lld\n",n-1);
return 0;
}
