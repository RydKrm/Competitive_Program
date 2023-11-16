#include<iostream>
#include<math.h>
#include <cstdlib>
using namespace std;
int main(){

 int t,n,s,k,i,j,mn=0,p,ns=0,flr=0;
 cin>>t;
 while(t--){
    cin>>n>>s>>k;
    for(i=0;i<k;i++){
        cin>>p;
        ns = abs(p-s);
        if(ns>mn){
            flr = p;
            mn = ns;
        }
    }
    cout<<flr<<endl;
 }

return 0;
}
