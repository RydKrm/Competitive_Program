#include<iostream>
using namespace std;
int main(){
int t,n,m,i,j;
cin>>t;
while(t--){
    cin>>n>>m;
    for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
        if(i==1&&j==1)cout<<"W";
        else cout<<"B";
        }
      cout<<endl;
    }
  }
  return 0;
 }
