#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
 int t;
 scanf("%d",&t);
 while(t--){
  long long i,p,z=0,sum=0,ans = 999999999999900019,n;
  scanf("%lld",&n);
  long long live[n+1],dam[n+1],save[n+1];
  dam[0] = 0;
  for(i=1;i<=n;i++){
    scanf("%lld%lld",&live[i],&dam[i]);
    save[i] = max(z,live[i]-dam[i-1]);
  }
   save[1] = max(z,live[1]-dam[n]);
   for(i=1;i<=n;i++) sum+=save[i];
   for(i=1;i<=n;i++){
     ans=min(ans,sum-save[i]+live[i]);
   }
   printf("%lld\n",ans);
 }
return 0;
}
