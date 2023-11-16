#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,c,p,fg=0,a,b,i;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>p>>c;
    if(p<c) fg=1;
    if(p<a) fg=1;
    if(c<b) fg=1;
    if(a-p<a-c) fg=1;
    a=p;b=c;
  }
  if(fg==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
return 0;
}
