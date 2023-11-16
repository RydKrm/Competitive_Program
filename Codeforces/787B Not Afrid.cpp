#include<iostream>
#include<stdio.h>
using namespace std;
int num[10200];
int main(){
int i,j,n,m,k,p,fg=0,fg2=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<m;i++){
    scanf("%d",&k);
    if(k==1) fg2=1;
    int ar[k+5];
    for(j=0;j<k;j++){
      scanf("%d",&p);
      ar[j]=p;
      if(p>0){
        if(num[p]==-1) fg=1;
        else num[p]=1;
      } else {
        p = p*-1;
        if(num[p]==1) fg=1;
        else num[p]=-1;
      }
    }
    for(int x=0;x<k;x++){
     if(ar[x]<0) ar[x]*=-1;
     num[ar[x]]=0;
    }
  }
  if(fg2==1) printf("YES\n");
  else if(fg==1) printf("NO\n");
   else printf("YES\n");
return 0;
}
