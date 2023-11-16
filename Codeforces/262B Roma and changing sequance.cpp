#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int n,k,a,p,m,sum=0;
 scanf("%d%d",&n,&k);
 int ar[n+5];
 for(int i=0;i<n;i++){
 scanf("%d",&ar[i]);
    if(ar[i]<0&&k>0){
     ar[i] = ar[i]*-1;
     k--;
   }
 }
 sort(ar,ar+n);
 if(k%2==1) ar[0]*=-1;
  for(int i=0;i<n;i++){
     sum+=ar[i];
   }
  printf("%d\n",sum);
return 0;
}
