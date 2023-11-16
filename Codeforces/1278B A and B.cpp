#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
 int main(){
 long long int a,b,n,t,i;
 cin>>t;
 while(t--){
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
    }
   long long int mn = min(a,b),mx = max(a,b);
    i = 1;
    while(mn<mx){
       mn+=i;
        i++;
        if(mn==mx){
            cout<<i-1<<endl;
          goto jump;
        }
        if(abs(mx-mn)==1){
            cout<<i+1<<endl;
            goto jump;
        }
    }
    jump:;
   long long int p = mn-mx;
    cout<<p+i-1<<endl;

 }
return 0;
}
