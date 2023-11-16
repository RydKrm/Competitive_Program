#include<iostream>
using namespace std;
int main(){

 int ar[1000],ar2[1000],i,t,n,k1,k2,p1,p2;
 cin>>t;
 while(t--){
    cin>>n>>k1>>k2;
    for(i=0;i<k1;i++){
        cin>>p1;
        if(n==p1) cout<<"YES"<<endl;
    }
    for(i=0;i<k2;i++){
        cin>>p2;
        if(n==p2)  cout<<"NO"<<endl;
    }
 }


return 0;
}
