#include<iostream>
using namespace std;
int main(){
 int ar[5100],i,t,n,p;
 cin>>t;
 while(t--){
  cin>>n;
  for(i=0;i<n;i++) cin>>ar[i];

  for(i=1;i<n-1;i++){
    if(ar[i-1]==ar[i+1]){
    cout<<"YES"<<endl;
     goto down;
    }
  }
  for(i=2;i<n-1;i++){
    if(ar[i-2]==ar[i+1]&&ar[i-1]==ar[i]){
    cout<<"YES"<<endl;
     goto down;
    }
  }
  cout<<"NO"<<endl;
  down:;
 }
return 0;
}
