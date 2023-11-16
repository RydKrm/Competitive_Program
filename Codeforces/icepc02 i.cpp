#include<iostream>
using namespace std;
int main(){
 int n,m,x,y,p=0,t,a;
 cin>>t;
 while(t--){
 cin>>n>>m>>x>>y;
 if(x!=0) a=m/x;
 if(n!=a&&y==0){
    cout<<"-1"<<endl;
 } else {
 p = n*(x+y)-m;
 cout<<p<<endl;
 }
 }
return 0;
}
