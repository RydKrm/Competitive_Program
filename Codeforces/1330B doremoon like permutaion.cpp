#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,ar[200000],i,p,cnt=0,mx=0,sm=0;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>ar[i];
    if(ar[i]>mx) mx=ar[i];
   }
   int p = n-mx;
   p = (p*(p+1)/2);
   for(i=0;i<p;i++){
     sm+=ar[i];
     if(sm==p) {
     }
   }



 }

return 0;
}
