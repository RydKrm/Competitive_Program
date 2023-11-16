#include<iostream>
using namespace std;
int main(){
int t,n,a,i;
cin>>t;
while(t--){
int sum=0,p=0;
   cin>>n;
   for(i=0;i<n;i++){
     cin>>a;
     while(a){
       sum += a%10;
       a/=10;
     }
   }
   if(sum%3==0) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
 }
    return 0;
}
