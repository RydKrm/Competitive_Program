#include<iostream>
using namespace std;
int main(){

 int m,n,i,p,t;
 cin>>t;
 while(t--){
    cin>>m>>n;
    if(m%n==0){
        cout<<"YES"<<endl;
    }
     else cout<<"NO"<<endl;
 }
return 0;
}
