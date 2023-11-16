#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int i,n,t,ar[200000];
 cin>>t;
 while(t--){
        cin>>n;
     for(i=0;i<n;i++) cin>>ar[i];
    for(i=0; i<n-1; i++){
      if(abs(ar[i+1]-ar[i])>1){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
          break;
        }
    }
   if(i==n-1) cout<<"NO"<<endl;
 }
return 0;
}
