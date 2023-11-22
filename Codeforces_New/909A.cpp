#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long

int main(){

     int ts;cin>>ts;
     while(ts--){
         int n;
         cin >> n;
         vector<int> a(n);
         for (int i = 0; i < n; ++i)
             cin >> a[i];
         ll ans = -1;
         for (int d = 1; d <= n; ++d){
             if (n % d == 0) {
                 ll mx = -1e18, mn = 1e18;
                 for (int i = 0; i < n; i += d){
                     ll sm = 0;
                     for (int j = i; j < i + d; ++j){
                         sm += a[j];
                     }
                     mx = max(mx, sm);
                     mn = min(mn, sm);
                 }
                 ans = max(ans, mx - mn);
             }
         }
         cout << ans << '\n';
     }

    return 0;
}