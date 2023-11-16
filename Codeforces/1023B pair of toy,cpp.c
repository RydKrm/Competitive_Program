#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int n,k;
 cin>>n>>k;
 if(n>=k) cout<<k/2<<endl;
 else {
    int mn = n-k;
    int mx = n;
    int p = max(0,(mx-mn+1)/2);
    cout<<p<<endl;
 }
return 0;
}



