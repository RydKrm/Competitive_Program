#include<iostream>
using namespace std;
int main(){
 long long n,i,cnt=0,t,a=1;
 cin>>t;
 while(t--){
  cin>>n;
  cnt=0;a=1;
  for(i=1;i<=n;i++) a *=i;
  cout<<"a = "<<a<<endl;
  while(1){
    if(a%10!=0) break;
    else {
      cnt++;
      a = a/10;
    }
  }
  cout<<cnt<<endl;
 }
return 0;
}
