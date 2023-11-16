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
  TestCase{
  int n,k,z;
  ll total = 0;
  sci2(n,k);sci(z); int zz = z;
  int ar[n+5];
  int mx=0,go;
  For(i,0,n-1) sci(ar[i]);
  For(i,0,k-1){
      if(k==n) break;
   int sum = ar[i]+ar[i+1];
   if(sum>mx){
    mx = sum;
    go = i;
   }
  }
  int cnt=0;
 For(i,0,go){
  total+=ar[i];
  cnt++;
 }

  int pos=go;

  For(i,cnt,k){
   if(pos==0){
      pos++;
    total+=ar[pos];
   } else {
    int pre = ar[pos-1];
    int nxt = ar[pos+1];
    if(z>0&&pre>nxt){
        pos--;
        z--;
        total+=ar[pos];
    }else if(pos<n){
    pos++;
    total+=ar[pos];
    }

   }
  //  px(total);
  }
  px(total);

     pos=0;
    ll total2=ar[0];
  For(i,0,k-1){
   if(pos==0){
      pos++;
    total2+=ar[pos];
   } else {
    int pre = ar[pos-1];
    int nxt = ar[pos+1];
    if(zz>0&&pre>nxt){
        pos--;
        zz--;
        total2+=ar[pos];
    }else if(pos<n){
    pos++;
    total2+=ar[pos];
    }

   }
  //  px(total);
  }
 py(total2);

  pfll(max(total,total2));pn;


  }





    return 0;
}





