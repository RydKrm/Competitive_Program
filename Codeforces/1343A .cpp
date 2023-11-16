#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,i,x=1,p=2;
  cin>>n;
  x+=p;
  while(1){
    if(n%x==0) {
     cout<<n/x<<endl;
     break;
    } else
      p = 2*p;
      x+=p;
  }
}
return 0;
}
