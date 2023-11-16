#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,a,b,c,mx,n,m;
cin>>t;
while(t--){
    cin>>a>>b>>c>>n;
    mx = max(a,max(b,c));
    m = 3*mx-a-b-c;
    if(m>n){cout<<"NO"<<endl;
    continue;}
    n = n-m;
    if(n%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
