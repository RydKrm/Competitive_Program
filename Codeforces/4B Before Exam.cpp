/// S -> 7:35AM

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

#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pstr(x) printf("%s\n",x);

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using mpll = map<ll,ll>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int main(){

 int n,s;
 sci2(n,s);
 int ar[n+5][5];
 int mn=0,mx=0;
 For(i,0,n-1){
  sci2(ar[i][0],ar[i][1]);
  mn +=ar[i][0];
 mx += ar[i][1];
 }

 if(s<mn||s>mx){
    printf("NO\n");
 } else{
  vi ans;
  int gap = s-mn;
  For(i,0,n-1){
  int  dif = ar[i][1]-ar[i][0];
    if(dif>0&&gap>0){
        if(gap>dif) {
         ans.pb(ar[i][1]);
         gap-=dif;
        }
      else {
        ans.pb(ar[i][0]+gap);
        gap = 0;

      }
    } else {
     ans.pb(ar[i][0]);
    }

  }
  printf("YES\n");
  Trav(x,ans){
   pfi(x);ps;
  }pn;

 }





    return 0;
}





