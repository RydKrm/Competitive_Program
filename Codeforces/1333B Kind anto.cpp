#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,ara[100001],arb[100001],a=0,b=0;
  cin>>n;
  for(int i=0;i<n;i++) cin>>ara[i];
  for(int i=0;i<n;i++) cin>>arb[i];

  if(ara[0]!=arb[0]){
    cout<<"NO"<<endl;
    goto down;
  }
   if(ara[0]==1) a=1;
   if(ara[0]==-1) b=-1;
  for(int i=1;i<n;i++){
   if(ara[i-1]==1) a=1; cout<<"a = "<<a<<endl;
   if(ara[i-1]==-1) b=-1; cout<<"b = "<<b<<endl;
    if(ara[i]==arb[i]) continue;
    if(ara[i]<arb[i]&&a==1) continue;
    if(ara[i]>arb[i]&&b==-1) continue;
   cout<<"NO"<<endl;
   goto down;
  }
  cout<<"YES"<<endl;
  down:;
 }
return 0;
}
