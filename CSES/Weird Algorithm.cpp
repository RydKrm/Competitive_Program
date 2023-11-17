#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
 
  ll n;
  cin>>n;

  vector<ll> vc;
  vc.push_back(n);

  while(n!=1){
    if(n%2) n = n*3+1;
    else  n = n/2;
    vc.push_back(n);
  }

  for(auto i:vc) cout<<i<<" ";
  cout<<endl;

    return 0;
}