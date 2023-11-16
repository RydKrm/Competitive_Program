#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
 int n,p,sum=0,w,i;
 scalbln()nf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&w);
  sum+=w;
 }
 sum=sum/2;
 p = sum%100;

 if(p==50) printf("NO\n");
 else printf("YES\n");

 return 0;
 }
