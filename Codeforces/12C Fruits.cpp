/// S -> 8:05AM E -> 8:35AM
/// S ->9:55AM  E -> 10:20AM
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

#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
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

#define mkp make_pair
#define pb push_back
#define fi first
#define se second

#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pstr(x) printf("%s\n",x);

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using si = set<int>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int main(){
  int n,m;
  sci2(n,m);
  int ar[n+5];
  For(i,0,n-1) sci(ar[i]);
  sort(ar,ar+n);

  string str;
  map<string,int>mp;

  For(i,1,m){
  cin>>str;
   mp[str]++;
  }

 vi vc;
 for(auto x:mp){
  vc.pb(x.se);
 }

 int mn=0,mx=0;
 sort(vc.begin(),vc.end(),greater<int>());
 For(i,0,vc.size()-1){
  mn+=ar[i]*vc[i];
 }
 pfi(mn);ps;

 //pn;for(auto x:vc) {pfi(x);ps;}pn;

 reverse(ar,ar+n);
 For(i,0,vc.size()-1){
  mx+=ar[i]*vc[i];
 }
 pfi(mx);pn;




    return 0;
}






