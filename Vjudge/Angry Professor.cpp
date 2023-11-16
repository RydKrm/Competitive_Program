#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,k,p,cnt=0;
  cin>>n>>k;
  for(int i=0;i<n;i++){
   cin>>p;
   if(p<=0) cnt++;
  }
  if(cnt<k) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
return 0;
}
