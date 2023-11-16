#include<iostream>
using namespace std;
int main(){
 int a,b,c,sum,p,i;
 cin>>a>>b>>c;
 p = b+c;
 sum = a;
 while(sum<=p){
    sum +=c;
    cout<<"sum = "<<sum<<endl;
    if(sum==b){
        cout<<"YES"<<endl;
        goto down;
    }
 }
 cout<<"NO"<<endl;
 down:
 return 0;
 }
