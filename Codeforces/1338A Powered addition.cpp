#include<iostream>
#include<math.h>
using namespace std;
int main(){

 int t;
 cin>>t;
 while(t--){
 long long int ar[100100],n,i,p=0,m,sum=0,d,mx=0;
  cin>>n;
  cin>>ar[0];
  mx = ar[0];
  for(i=1;i<n;i++){
   cin>>ar[i];
  if(mx>ar[i]){
   d = mx-ar[i];
   m = log2(d)+1;
   if(p<m){
     sum+=m-p;
     p = m;
   }
  }
  else mx = ar[i];
 }
 cout<<sum<<endl;
}
return 0;
}
