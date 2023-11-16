#include<iostream>
using namespace std;

int main(){

 long long int a,b,p,m,n,count=0;
 cin>>n>>m;

 if(m%n != 0){
    cout<<"-1"<<endl;
 } else {
   p = m/n;

   while(p>1){
    if(p%2==0){
        p = p/2;
    }
    else if(p%3==0){
        p = p/3;
    }
    else {
        cout<<"-1"<<endl;
        goto down;
    }
    count++; // cout<<"cout = "<<count<<endl;
   }
   cout<<count<<endl;
 }
 down :

return 0;
}
