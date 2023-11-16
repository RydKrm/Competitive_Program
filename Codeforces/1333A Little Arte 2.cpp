#include<iostream>
using namespace std;
int main(){
int t,n,m,i,j;
cin>>t;
while(t--){
    cin>>n>>m;
    cout<<'B';
    for(j=2;j<=m;j++) cout<<'W';
    cout<<endl;
    for(i=2;i<=n;i++){
      for(j=1;j<=m;j++)
         cout<<"B";
      cout<<endl;
    }
  }
  return 0;
 }
