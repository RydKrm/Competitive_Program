#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
   int n,c,t,m,cnt=0,p,y;
   cin>>n>>c>>m;
   cnt = n/c;
   p = cnt;
   while(p){
    y = p%m;    // cout<<"y = "<<y<<endl;
    p = p/m;    // cout<<"p = "<<p<<endl;
    if(p==0)  break;
    cnt=cnt+p;   //cout<<"cnt = "<<cnt<<endl;
    p=p+y;       //cout<<"p+ = "<<p<<endl;

   }
   cout<<cnt<<endl;
 }
return 0;
}
