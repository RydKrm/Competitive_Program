#include<iostream>
#include<algorithm>
#define ll long long 
using namespace std;

int main(){

   ll n,sum=0; 
   cin>>n;
   ll arr[n+5];

   for(int i=1;i<n;i++){
    ll ts;
    cin>>ts;
    sum += ts;
   }

   ll ans = (n*(n+1))/2-sum;

   cout<<ans<<endl;

    return 0;
}