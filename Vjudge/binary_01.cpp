#include<iostream>
using namespace std;
int main(){

 int ts;
 cin>>ts;
 while(ts--){
    long long a,b,c;
    cin>>a>>b>>c;

    long long sum = a+b+c;
    long long x = sum/9;

     if(a<x||b<x||c<x){
        cout<<"NO"<<endl;
        continue;
     }

    if(sum<9) cout<<"NO"<<endl;
    else if(sum%9) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

 }


 return 0;
}
