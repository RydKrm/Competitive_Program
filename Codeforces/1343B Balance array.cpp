#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 long long  int n,p,m,sum=0,sum2=0,i,j;
  cin>>n;
  m = n/2;
  if(n%4!=0){
   cout<<"NO"<<endl;
  }else {
    cout<<"YES"<<endl;
    j=2;
     for(i=1;i<=m;i++){
      cout<<j<<" ";
      sum+= j; //cout<<" s1 "<<sum<<endl;
      j+=2;
     } j=1;
      for(i=1;i<m;i++){
        cout<<j<<" ";
        sum2+=j; //cout<<" s2 "<<sum2<<endl;
        j+=2;
      }
      cout<<sum-sum2<<endl;
      cout<<endl;

  }



 }


return 0;}
