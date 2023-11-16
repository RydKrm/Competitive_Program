#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
 int n,p,i,sum=0,ar[1001],p1=0,p2=0;
  scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&ar[i]);
 }
 sort(ar,ar+n,greater<int>());

for(i=0;i<n;i++){
   if(p1>p2) p2+=ar[i];
   else p1+=ar[i];
}

 if(p1==p2) printf("YES\n");
 else printf("NO\n");

 return 0;
 }
