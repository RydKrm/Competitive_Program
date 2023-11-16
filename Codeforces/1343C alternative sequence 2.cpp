#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
  long long int i,n,p,mx=0,sum=0;
  cin>>n;
  long long int ar[n+5];
  cin>>ar[0];
  mx = ar[0];
  for(i=1;i<n;i++){
  cin>>ar[i];
    if(abs(ar[i]+ar[i-1])!=abs(ar[i])+abs(ar[i-1])){
       sum +=mx;
       mx = ar[i];
    } else {
    mx = max(mx,ar[i]);
   }
  }
  sum+=mx;
  cout<<sum<<endl;
 }
return 0;
}
