#include<iostream>
using namespace std;
int main(){

 int a,n,t,div=0,L,v,l,r;

  cin>>t;
  while(t--){
  cin>>L>>v>>l>>r;
  div = L/v;
  a = r-l;
  int sub = a/v;
  if(l%v==0 || r%v==0)sub++;
  int ans = div-sub;

  cout<<ans<<endl;
 }

return 0;
}
