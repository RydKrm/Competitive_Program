#include <bits/stdc++.h>
using ll = long long ;
#define MX = 1000000000
 int main(){

  ll n,m,cnt=0;
  scanf("%lld%lld",&n,&m);
    vector<int> vc;
  set<long long> st;

 for(int i=0;i<n;i++){
    ll p;
    scanf("%lld",&p);
    st.insert(p);
 }
 for(int i=1;i<MX;i++){
    if(!st.count(i)){
        vec.push_back(i);
        m-=i;
    }
 }

 printf("%lld \n",vec.size());
 for(auto x:vec){
    printf("%lld ",x);
 }

 return 0;

}
