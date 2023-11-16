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
  TestCase{
  int n,x;
  sci2(n,x);
  int ar[n+5];
  vi vc;
  For(i,0,n-1){
   int a;
   sci(a);
   ar[i] = a;
   int cnt=1;
   while(a%x==0){
    a /=x;
    cnt++;
   } //if(cnt==1) cnt = 0;

   vc.pb(cnt);

  }

 // For(x,0,vc.size()-1){ pfi(vc[x]);ps;
  //  if(vc[x]<mn){
   //     mn = vc[x];
   //     pos = x;
   // }
 // }

  ll ans = 0,mn = vc[0];
 // For(i,0,n-1){
  //  if(i<pos){
  //  ans += ar[i]*vc[i];
  // } else ans += ar[i]*mn;
   //  if(vc[i]==0) break;
 // }
 for(auto x:vc) {pfi(x);ps;}pn;

  For(i,0,n-1){
   if(vc[i]<mn) mn = vc[i];
   ans += mn*ar[i];

  }

 pfll(ans);pn;
}

    return 0;
 }
