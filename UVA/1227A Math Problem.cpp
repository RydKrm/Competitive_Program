#include<iostream>
using namespace std ;
int main(){

 int i,n,t,x,y;
 cin>>t;
 while(t--){
    int mn=1000000000,mx=0;
    cin>>n;
  for(i=0;i<n;i++){
    cin>>x>>y;
    if(x>mx) mx = x;
    if(y<mn) mn = y;

  }
  cout<<"max = "<<mx<<endl<<"min = "<<mn<<endl;

 if(mx<mn){
    cout<<"0"<<endl;
    continue;
 }
 if(n==1){
    cout<<"0"<<endl;
    continue;
 }
 cout<<mx-mn<<endl;
 }

return 0;
}
