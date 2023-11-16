#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int i,ar[100],n,p,cnt=0,j;
 cin>>n;
 for(i=0;i<n;i++) cin>>ar[i];
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
   p = __gcd(ar[i],ar[j]); //cout<<" p = "<<p<<endl;
   if(p==1){
   cnt=1;
   goto down;
    }
   }
 }
 down:;
 if(cnt==1) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}
return 0;
}
