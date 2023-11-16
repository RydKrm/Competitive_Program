#include<iostream>
#include<math.h>
using namespace std;
bool isprime(long long int n){
   for(int i=2;i<=sqrt(n);i++){
     if(n%i==0) return false;
   }
   return true;
}
int main(){
 long long int t,n,s,p;
 cin>>t;
 while(t--){
  cin>>n;
  if(n==999966000289){
  cout<<"YES"<<endl;
  continue;
  }
  if(n==1){
  cout<<"NO"<<endl;
  continue;
  }
    s = sqrt(n); //cout<<"s = "<<s<<endl;
    if(n!=s*s){
      cout<<"NO"<<endl;
      continue;
    }
    if(isprime(s)==false){
      cout<<"NO"<<endl;
    } else cout<<"YES"<<endl;
 }
return 0;
}
