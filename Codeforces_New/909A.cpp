#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main(){

     int ts;cin>>ts;
     while(ts--){
        ll n,amx=0,amn = 0,ans=0;
        cin>>n;
        int arr[n+5];
        for(int i=1;i<=n;i++) cin>>arr[i];
        
        for(int i=1;i<=n/2;i++){
            ll sum =0,mx=0,mn=999999999999;
            if(n%i==0){
                for(int j=1;j<=n;j++){
                    sum += arr[j];
                    if(j%i==0){
                        mx = max(mx,sum);
                        mn = min(mn,sum);
                        sum = 0;
                    } 
                }
                amn = max(amn,mn);
                amx = max(amx,mx);
                ans = max(ans,(amx-amn));            
            }
        }
        
        cout<<ans<<endl;
     }

    return 0;
}