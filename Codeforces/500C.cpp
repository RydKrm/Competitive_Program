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
 /// Taking input
  int n,m;
  sci2(n,m);
  int weight[n+5],lst[m+5];
  For(i,0,n-1) sci(weight[i]);

  /// Make a list with which item came first in read
   mpii mp;
   vi vc;
   For(i,0,m-1){
    int x;
    sci(x);
    lst[i] = x;
    if(!mp.count(x)){
        vc.pb(x);
        mp[x]++;
    }
   }
   vector <int> stk;
   /// making stack
   for(int i=0;i<vc.size();i++){
    stk.pb(vc[i]);
   }

   ll ans = 0;
   vi vc2;
  /// Add all item with which book is above
   for(int j=0;j<m;j++){
   vc2[0] = 0;
   For(i,1,stk.size()-1){
    vc2[i] = vc2[i-1]+stk[i-1];
   }

  /// Find the book and add total weight above the book
  int p;
  for(int k=0;k<stk.size();k++){
    if(lst[j]==stk[k]){
        ans += vc2[k];
        p = stk[k];
        break;
    }
  }

  /// put at top the book and change weight
  vector<int> :: iterator it;
  it = stk.begin();

   for(int j=0;j<stk.size();j++){
    if(stk[j]==p) break;
    else it++;
   }
   stk.erase(it);
  stk.pb(p);

  /// Again do it for all book

   }


   pfll(ans);pn;

    return 0;
}





