#include<iostream>
using namespace std;
int main(){
 int t,n,a,b;
 cin>>t;
 while(t--){
    cin>>a>>b;
    n = b-a;
    if(n==0) cout<<"0"<<endl;
    else if(n%2==0){
        if(n>0) cout<<"2"<<endl;
        else cout<<"1"<<endl;
    } else {
      if(n>0) cout<<"1"<<endl;
      else cout<<"2"<<endl;
    }
 }
return 0;
}
