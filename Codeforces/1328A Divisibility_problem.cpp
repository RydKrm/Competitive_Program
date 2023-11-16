#include<iostream>
using namespace std;
int main(){
 long long t,a,b,n;
 cin>>t;
 while(t--){
  cin>>a>>b;
  n = a%b;
  if(n==0){
  cout<<"0"<<endl;
  continue;
  }
  n = b-n;
  cout<<n<<endl;
 }
return 0;
}
