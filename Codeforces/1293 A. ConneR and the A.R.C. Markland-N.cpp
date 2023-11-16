#include<iostream>
#include<vactor>
using namespace std;
int main(){
int ar[1000],a,n,s,k,t,p,mn=100000;
cin>>t;
while(t--){
   cin>>n>>s>>k;
    for(i=0;i<k;i++){
     cin>>a;
      p = abs(a-s);
      if(p<mn) mn = p;
    }
  cout<<mn<<endl;
}
return 0;
}
