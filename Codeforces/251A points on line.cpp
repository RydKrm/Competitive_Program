#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    long long n,a,d,ans=0,p;
    vector<int>vec;
    scanf("%lld%lld",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%lld",&p);
        vec.push_back(p);
    }

    for(ll i=0;i<n-2;i++){
        ll in=upper_bound(vec.begin(),vec.end(),(vec[i]+d))-vec.begin();
        ll val=in-2-i;
        if(val<1) continue;
        ans+=(val*(val+1))/2;
    }
    printf("%lld\n",ans);
    return 0;

}
