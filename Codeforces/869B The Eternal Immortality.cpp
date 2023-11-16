#include<iostream>
using namespace std;
int main(){
 long long int a,b,i,m=1,s,p,q=1;
 cin>>a>>b;
 if(a==0||b==0){
    cout<<"0"<<endl;
 } else {
 for(i=a+1;i<=b;i++){
    s = i%10; cout<<"s  "<<s<<endl;
    p = q*s;  cout<<"p  "<<p<<endl;
    q = p%10; cout<<"q  "<<q<<endl;
    if(q==0) q=1;
 }
 cout<<p<<endl;
 }
return 0;
}
