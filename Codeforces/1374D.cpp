#include<algorithm>
#include<iostream>
#include<map>
#define ll long long
using namespace std;

int main(){
 int ts;
 cin>>ts;
 while(ts--){
    ll n,k,p,mx=0;
    map<int,int> mp;
    cin>>n>>k;
    while(n--){
        cin>>p;
        if(p%k){
          int ne = (k-p%k);
          mp[ne]++;
        }
    }
    for(auto x:mp){
        ll val = (x.first%k)+ (x.second-1)*k;
        mx = max(mx,val);
    }
    if(mx) mx++;
    cout<<mx<<endl;

 }



 return 0;
}
