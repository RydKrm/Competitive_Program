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
 string str;
 cin>>str;
 int ans = 0;
 map<char,int> mp;
 for(int i=0;i<str.size();i++){
    mp[str[i]]++;
 }

 if(mp.size()==1){
    ans = str.size();
 } else {
  int mx1 = 0,mx2 = 0;
  char mx1c,mx2c;

 /// find max 1 number
 for(auto x:mp){
    if(x.se>mx1){
        mx1 = x.se;
        mx1c = x.fi;
    }
  }

   mp[mx1c] = 0;
///find max 2 number
  for(auto x:mp){
    if(x.se>mx2 ){
        mx2 = x.se;
        mx2c = x.fi;
    }

  }

 vector<char> vc;

 for(int i=0;i<str.size();i++){
    if(str[i]==mx1c || str[i]==mx2c){
        vc.pb(str[i]);
        cout<<str[i];
    }
 } pn;
 ans = mx2+mx1;  //px(ans);
 for(int i=1;i<vc.size();i++){
    if(vc[i]==vc[i-1]) ans--;
 }


 ans = ans/2;
 ans = ans*2;

 }

 ans = str.size() - ans;
 cout<<ans<<endl;
 }

    return 0;
}





