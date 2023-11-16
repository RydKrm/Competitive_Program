//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<bitset>

#define Filein(N) freopen("N", "r", stdin)
#define Fileout(N) freopen("N", "w", stdout)
#define sci(x) scanf("%d", &x)
#define sci2(x,y) scanf("%d%d", &x,&y)
#define scll2(x,y) scanf("%lld%lld",&x,&y)
#define scll(x) scanf("%lld",&x)
#define scd(x) scanf("%lf", &x)
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", x)
#define pfll(x) printf("%lld", x)
#define pfd(x) printf("%f", x)
#define pfstr(x) printf("%s", x)
#define ps printf(" ")
#define pn printf("\n")
#define pfdt printf("..")
#define For(var,start,end) for(int var=start; var<=end;var++)
#define rFor(var,start,end) for(int var=start; var>=end; var--)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
#define Trav(var,container) for(auto var:container)
#define mkp make_pair
#define pb push_back
#define fi first
#define se second
#define ins insert
#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pcnt(x) cout<<" cnt = "<<x<<endl;
#define pstr(x) printf("%s\n",x);
#define INF 1000000000
#define LINF 5000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000009
#define all(a) a.begin(),a.end()
#define sz(a) (int)a.size()

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using mpll = map<ll,ll>;
using mpci = map<char,int>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;
using pii = pair<int,int>;



 int main(){
   int N;
   cin>>N;
   For(cas,1,N){
    ll n;
    sci(n);
    ll ar[n+5],ar2[n+5],mx = 0;
    For(i,0,n-1){
        scll(ar[i]);
        ar2[i] = ar[i];
        mx = max(mx,ar[i]);
    }

    vi vc;
   for(int i=mx;i>=2;i--){
     ll cnt = 0;
     for(int j=0;j<n;j++){
          if(ar[j]==1) continue;
        if(ar[j]%i==0)
            cnt++;
       }
      if(cnt>1){
           vc.pb(i);
        For(j,0,n-1){
         if(ar[j]%i==0&&ar[j]!=1){
            ar[j] /= i;
         }
        }
      }
     }

    // For(i,0,n-1) {pfi(ar[i]);ps;}pn;
   // pz(vc.size());

     ll gcd = 1;
     if(vc.size()!=0){
     For(i,0,vc.size()-1){
      gcd *= vc[i];
       }
     }
     For(i,0,n-1){
      gcd *= ar[i];
     }


      ll sum = 0;
      For(i,0,n-1){
       sum += gcd/ar2[i];
      } // px(sum);
      gcd *= n;  //py(gcd);
      mx  = min(gcd,sum);
      for(int i=2;i<=sqrt(mx);i++){
        while(gcd%i==0&&sum%i==0){
            gcd /= i;
            sum /= i;
        }
      }


   cout<<"Case "<<cas<<": "<<gcd<<"/"<<sum<<endl;

    }



    return 0;
}





