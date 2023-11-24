#include<iostream>
using namespace std;

int main(){

 int ts;cin>>ts;
 while(ts--){
   int n;cin>>n;
   int ar[n];
   for(int i=0;i<n;i++) cin>>ar[i];
   long long ans=0;
   
   for(int i=1;i<n;i++){
      if(ar[i-1]<ar[i]) 
        ans += (ar[i]-ar[i-1]);
   }
   ans += ar[0]-1;
   cout<<ans<<endl;
 }
  return 0;
}