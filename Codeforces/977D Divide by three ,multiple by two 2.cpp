#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cheak_3(ll x){
  int rt=0;
  while(x%3 == 0){
    rt++;
    x/= 3;
  }
  return rt;
}
int n;
vector<pair<int,ll>> v;
int main(){
  cin>>n;
  v.resize(n);
  for(int i=0; i<n; i++){
    cin>>v[i].second;
    v[i].first=-cheak_3(v[i].second);
  }
  sort(v.begin(),v.end());
  for(int i=0; i<n; i++)
    cout<<v[i].second<<" ";
    return 0;
}
