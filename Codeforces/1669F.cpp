#include<iostream>
#include<map>
#define ll long long
using namespace std;

int main()
{
    int ts;
    cin>>ts;
    while(ts--){
        ll sum=0;
        map<ll,ll> mp;
        int n;
        cin>>n;
        int ar[n+5];
        for(int i=1;i<=n;i++){
          cin>>ar[i];
          sum += ar[i];
          mp[sum] = i;
        }

        ll sum2 = 0;
        ll ans=0;
        for(int i=n;i>0;i--){
            sum2 += ar[i];
            if(mp.count(sum2)){
                int all = (n-i+1)+mp[sum2];
                if(all<=n) ans = all;
                else break;
            }

        }
        cout<<ans<<endl;

    }


    return 0;
}
